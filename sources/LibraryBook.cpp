#include "LibraryBook.h"


LibraryBook::LibraryBook(int amount, int id) : Book() {
    this->Amount = amount;
    this->InStock = amount;

}


LibraryBook::LibraryBook(const Book &baseBook, int amount, int id) : Book(baseBook){
    this->Id = id;
    this->Amount = amount;
    this->InStock = amount;


}


string LibraryBook::GetFullInfo() {
    string catalogInfo = "BID:" + to_string(this->Id) + " " + this->GetBaseInfo() +
            " - " + to_string(this->InStock) + "/" + to_string(this->Amount);
    return catalogInfo;
}





