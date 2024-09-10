#ifndef member_h
#define member_h

#include <string>
using namespace std;

class Member {
private:
    string name;
    int memberId;

public:
    // Constructors
    Member();
    Member(string n, int id);

    // Getters
    string getName() const;
    int getMemberId() const;

    // Display member information
    void displayMemberInfo() const;
};

#endif