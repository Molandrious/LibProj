#include <iostream>
#include <utility>

#include "Book.h"

using namespace std;

Book::Book() {
    cout << "Book title: ";
    cin >> this->Title;
    cout << "Author name: ";
    cin >> this->Authors;
    cout << "Publisher: ";
    cin >> this->Publisher;
    cout << "Release date: ";
    cin >> this->ReleaseDate;
    cout << "Pages amount: ";
    cin >> this->PageCount;
}

Book::Book(string title, string authors, string publisher, string releaseDate, int pageCount) {
    this->Title = title;
    this->Authors = authors;
    this->Publisher = publisher;
    this->ReleaseDate = releaseDate;
    this->PageCount = pageCount;
}

Book::Book(const Book &anotherBook) {
    this->Title = anotherBook.Title;
    this->Authors = anotherBook.Authors;
    this->Publisher = anotherBook.Publisher;
    this->ReleaseDate = anotherBook.ReleaseDate;
    this->PageCount = anotherBook.PageCount;
}


string Book::GetBaseInfo() const{
    string baseInfo = Authors + " - " + Title +
            " [" + ReleaseDate + ", " + Publisher + ", " + to_string(PageCount) + "c.]" ;
    return baseInfo;
}








