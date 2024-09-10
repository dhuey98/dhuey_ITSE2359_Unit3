#include "Book.h"
#include <iostream>
using namespace std;

// Default constructor
Book::Book() : title("Unknown"), author("Unknown"), publicationYear(0) {}

// Parameterized constructor
Book::Book(string t, string a, int y) : title(t), author(a), publicationYear(y) {}

// Getters
string Book::getTitle() const { return title; }
string Book::getAuthor() const { return author; }
int Book::getPublicationYear() const { return publicationYear; }

// Display the method
void Book::displayBookInfo() const {
    cout << "Title: " << title << ", Author: " << author 
         << ", Year: " << publicationYear << endl;
}