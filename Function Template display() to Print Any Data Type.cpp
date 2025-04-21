#include <iostream>
using namespace std;

template <typename T>
T findMax(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    cout << "Max (int): " << findMax(5, 8) << endl;
    cout << "Max (float): " << findMax(5.3f, 2.9f) << endl;
    cout << "Max (double): " << findMax(3.14159, 3.14) << endl;
    return 0;
}
