#include <iostream>
#include "Book.h"
#include "Library.h"
#include "Member.h"

using namespace std;

int main() {
    // Books
    Book book1("Diary of a Wimpy Kid", "Jeff Kinney", 2007);
    Book book2("The Catcher in the Rye", "J.D. Salinger", 1951);
    Book book3("Moby Dick", "Herman Melville", 1851);

    // Library to add books
    Library myLibrary;
    myLibrary.addBook(book1);
    myLibrary.addBook(book2);
    myLibrary.addBook(book3);

    // Display books
    cout << "Library contents:" << endl;
    myLibrary.displayLibrary();

    // Create member
    Member member1("Derek Huey", 123);

    // Display member information
    cout << "\nLibrary member:" << endl;
    member1.displayMemberInfo();

    return 0;
}