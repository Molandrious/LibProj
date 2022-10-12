#ifndef LIBPROJ_READERTICKET_H
#define LIBPROJ_READERTICKET_H

#include <vector>
#include <array>
#include <string>

using namespace std;

class ReaderTicket {
    friend class LibraryCatalog;
private:
    int Id;
    vector<array<string, 3>> Entries = {};

public:
    string FullName;

    ReaderTicket(int id, string &fullName);
    string GetBaseInfo();

    int getId() const;
};


#endif //LIBPROJ_READERTICKET_H
