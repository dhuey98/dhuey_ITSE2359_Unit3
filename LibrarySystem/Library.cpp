#include "Library.h"
#include <iostream>
using namespace std;

// Add book to library
void Library::addBook(const Book& book) {
    books.push_back(book);
}

// Display all books in library
void Library::displayLibrary() const {
    for (const Book& book : books) {
        book.displayBookInfo();
    }
}