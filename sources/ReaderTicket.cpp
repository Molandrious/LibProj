#include "ReaderTicket.h"
#include <iostream>


ReaderTicket::ReaderTicket(int id, string &fullName) {
    Id = id;
    FullName = fullName;
}

string ReaderTicket::GetBaseInfo() {
    return "RID:" + to_string(Id) + " " + FullName;
}

int ReaderTicket::getId() const {
    return Id;
}

//string ReaderTicket::ShowOnHandsBooks() {
//    return "1";
//}
//
//string ReaderTicket::ShowReadingHistory() {
//    return "2";
//}



