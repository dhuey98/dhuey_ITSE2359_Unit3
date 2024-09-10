#ifndef library_h
#define library_h

#include <vector>
#include "Book.h"

class Library {
private:
    vector<Book> books;

public:
    // Add book to the library
    void addBook(const Book& book);

    // Display all books in library
    void displayLibrary() const;
};

#endif