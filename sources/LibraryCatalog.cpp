#include "LibraryCatalog.h"
# include <iostream>

void LibraryCatalog::AddReaderTicketToCatalog() {
    int readerId = ++ReadersAmount;
    string fullName;

    cout << "Reader full name: ";
    cin >> fullName;

    ReaderTicket readerTicket = ReaderTicket(readerId, fullName);
    ReaderTickets.push_back(readerTicket);
}

ReaderTicket* LibraryCatalog::GetReaderTicket(int readerId) {
    for (auto &reader : ReaderTickets) {
        if (reader.getId() == readerId) {
            return &reader;
        }
    }

    cout << "No reader with this id.";
    return nullptr;
}

void LibraryCatalog::AddReaderTicketToCatalog(string fullName) {
    int readerId = ++ReadersAmount;

    ReaderTicket readerTicket = ReaderTicket(readerId, fullName);
    ReaderTickets.push_back(readerTicket);
}

void LibraryCatalog::AddBookToCatalog() {
    int amount;

    cout << "Amount of books: ";
    cin >> amount;

    DifferentBooksAmount++;
    TotalBooksAmount += amount;

    LibraryBook newBook = LibraryBook(amount, DifferentBooksAmount);
    CatalogBooks.push_back(newBook);
}

void LibraryCatalog::AddBookToCatalog(const Book& bookObject, int amount) {
    int bookId;
    DifferentBooksAmount++;
    TotalBooksAmount += amount;

    if (ReleasedBookIds.empty()) {
        bookId = DifferentBooksAmount;
    } else {
        bookId = *ReleasedBookIds.begin();
    }

    LibraryBook newBook = LibraryBook(bookObject, amount, bookId);
    CatalogBooks.push_back(newBook);
    sort(CatalogBooks.begin(), CatalogBooks.end(), compareBookIds);
}

void LibraryCatalog::DeleteBookFromCatalog(int id) {
    int index = id - 1;

    ReleasedBookIds.insert(id);
    DifferentBooksAmount--;
    TotalBooksAmount -= CatalogBooks.at(index).Amount;

    auto iterator = CatalogBooks.begin() + index;
    CatalogBooks.erase(iterator);
}


void LibraryCatalog::GiveBook(int readerId, int bookId) {
    auto readerTicket = GetReaderTicket(readerId);

    if (readerTicket != nullptr) {
        readerTicket->Entries.push_back({to_string(bookId), "data1", "data2"});
    }
}

//void LibraryCatalog::ReturnBook() {
//
//}
//
//void LibraryCatalog::ShowYearBorrowers() {
//
//}

void LibraryCatalog::ShowBooksCatalog() {
    for (auto book: CatalogBooks) {
        cout << book.GetFullInfo() << endl;
    }
}

void LibraryCatalog::ShowReadersList() {
    for (auto reader: ReaderTickets) {
        cout << reader.GetBaseInfo() << endl;
    }
}
//
//void LibraryCatalog::ShowBookInfo(int id) {
//
//}
//
//void LibraryCatalog::ShowCatalogStats() {
//
//}



bool LibraryCatalog::compareBookIds(const LibraryBook &firstBook, const LibraryBook &secondBook) {
    return firstBook.Id < secondBook.Id;;
}

string LibraryCatalog::ShowReadingHistory(int readerId) {
    auto readerTicket = GetReaderTicket(readerId);
    for (auto entry : readerTicket->Entries) {
        for (auto thing : entry) {
            cout << thing << " ";
        }
        cout << endl;
    }
}










