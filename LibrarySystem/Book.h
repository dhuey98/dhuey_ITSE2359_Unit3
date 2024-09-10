#ifndef book_h
#define book_h

#include <string>
using namespace std;

class Book {
private:
    string title;
    string author;
    int publicationYear;

public:
    // Constructors
    Book();
    Book(string t, string a, int y);

    // Getters
    string getTitle() const;
    string getAuthor() const;
    int getPublicationYear() const;

    // Display the method
    void displayBookInfo() const;
};

#endif