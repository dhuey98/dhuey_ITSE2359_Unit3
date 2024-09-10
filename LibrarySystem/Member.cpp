#include "Member.h"
#include <iostream>
using namespace std;

// Default constructor
Member::Member() : name("Unknown"), memberId(0) {}

// Parameterized constructor
Member::Member(string n, int id) : name(n), memberId(id) {}

// Getters
string Member::getName() const { return name; }
int Member::getMemberId() const { return memberId; }

// Display member information
void Member::displayMemberInfo() const {
    cout << "Name: " << name << ", Member ID: " << memberId << endl;
}