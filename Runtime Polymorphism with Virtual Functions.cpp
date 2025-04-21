#include <iostream>
using namespace std;

class Student {
public:
    virtual void study() = 0; // Pure virtual
};

class Undergraduate : public Student {
public:
    void study() override {
        cout << "Undergraduate student studies general subjects." << endl;
    }
};

class Postgraduate : public Student {
public:
    void study() override {
        cout << "Postgraduate student focuses on research work." << endl;
    }
};

int main() {
    Student* s;

    Undergraduate u;
    Postgraduate p;

    s = &u;
    s->study();

    s = &p;
    s->study();

    return 0;
}
