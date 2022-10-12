#ifndef LIBPROJ_LIBRARYBOOK_H
#define LIBPROJ_LIBRARYBOOK_H


#include "Book.h"

class LibraryBook : public Book{
    friend class LibraryCatalog;

    LibraryBook(int amount, int id);
    LibraryBook(const Book &baseBook, int amount, int id);

private:
    int Id;
    int Amount;
    int InStock;

public:
    string GetFullInfo();
};


#endif //LIBPROJ_LIBRARYBOOK_H
