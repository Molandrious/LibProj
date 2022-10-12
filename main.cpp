#include <iostream>

#include "sources/Book.h"
#include "sources/LibraryBook.h"
#include "sources/LibraryCatalog.h"



int main() {
    LibraryCatalog myLibrary;

    Book firstBook = Book("firstBook", "AuthorLoh", "PublsiherLoh",
                          "10.10.10", 10);
    Book secondBook = Book("secondBook", "AuthorLoh", "PublsiherLoh",
                          "10.10.10", 20);
    myLibrary.AddBookToCatalog(firstBook, 5);
    myLibrary.AddBookToCatalog(secondBook, 10);
    myLibrary.ShowBooksCatalog();
    cout << endl;
    myLibrary.DeleteBookFromCatalog(1);
    myLibrary.ShowBooksCatalog();
    cout << endl;
    myLibrary.AddBookToCatalog(secondBook, 10);
    myLibrary.ShowBooksCatalog();

    cout << endl;

    myLibrary.AddReaderTicketToCatalog("Debil");
    myLibrary.AddReaderTicketToCatalog("Debil2");

    myLibrary.ShowReadersList();
    myLibrary.GiveBook(1, 1);
    myLibrary.ShowReadingHistory(1);
}
