#include <iostream>
using namespace std;

template <typename T>
class Storage {
    T data;
public:
    Storage(T d) : data(d) {}

    void display() {
        cout << "Stored value: " << data << endl;
    }
};

int main() {
    Storage<int> s1(100);
    Storage<float> s2(3.14f);
    Storage<string> s3("Template Storage");

    s1.display();
    s2.display();
    s3.display();

    return 0;
}

