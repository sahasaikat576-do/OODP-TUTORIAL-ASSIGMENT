#include <iostream>
using namespace std;

class Student {
protected:
    string name;
    int rollNo;
public:
    void setStudent(string n, int r) {
        name = n;
        rollNo = r;
    }
};

class SportsPlayer {
protected:
    string sportName;
    int ranking;
public:
    void setSportsPlayer(string s, int rank) {
        sportName = s;
        ranking = rank;
    }
};

class SportStudent : public Student, public SportsPlayer {
public:
    void display() {
        cout << "Name: " << name << "\nRoll No: " << rollNo 
             << "\nSport: " << sportName << "\nRanking: " << ranking << endl;
    }
};

int main() {
    SportStudent ss;
    ss.setStudent("Rohan", 25);
    ss.setSportsPlayer("Football", 3);
    ss.display();
    return 0;
}
