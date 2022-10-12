#ifndef LIBPROJ_LIBRARYCATALOG_H
#define LIBPROJ_LIBRARYCATALOG_H

#include <string>
#include <vector>
#include <set>

#include "LibraryBook.h"
#include "ReaderTicket.h"


class LibraryCatalog {
private:
    int DifferentBooksAmount = 0;
    int TotalBooksAmount = 0;
    int ReadersAmount = 0;
    set<int> ReleasedBookIds;
    vector<LibraryBook> CatalogBooks;
    vector<ReaderTicket> ReaderTickets;

    static bool compareBookIds(const LibraryBook &firstBook, const LibraryBook &secondBook);
public:
    ReaderTicket* GetReaderTicket(int readerID);

    void AddReaderTicketToCatalog();
    void AddReaderTicketToCatalog(string fullName);
    void AddBookToCatalog();
    void AddBookToCatalog(const Book& bookObject, int amount);
    void DeleteBookFromCatalog(int id);
    void GiveBook(int readerId, int bookId);
//    void ReturnBook();
//    void ShowYearBorrowers();
    void ShowBooksCatalog();
    void ShowReadersList();
//    string ShowOnHandsBooks(int readerId);
//    string ShowOnHandsBooks(string fullName);
    string ShowReadingHistory(int readerId);
//    void ShowBookInfo(int id);
//    void ShowCatalogStats();
};


#endif //LIBPROJ_LIBRARYCATALOG_H
