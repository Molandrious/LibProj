cmake_minimum_required(VERSION 3.23)
project(LibProj)

set(CMAKE_CXX_STANDARD 20)

add_executable(LibProj main.cpp sources/Book.cpp sources/Book.h sources/LibraryBook.cpp sources/LibraryBook.h sources/ReaderTicket.cpp sources/ReaderTicket.h sources/LibraryCatalog.cpp sources/LibraryCatalog.h)
