#ifndef LIBPROJ_BOOK_H
#define LIBPROJ_BOOK_H

#include <cstring>
#include <cctype>
#include <string>
#include <iostream>

using namespace std;

class Book {
public:
    string Title;
    string Authors;
    string ReleaseDate;
    string Publisher;
    int PageCount;

    Book();
    Book(string title, string authors, string publisher, string releaseDate, int pageCount);
    Book(const Book &anotherBook);

    string GetBaseInfo() const;
};


#endif //LIBPROJ_BOOK_H
