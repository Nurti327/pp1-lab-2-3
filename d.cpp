#include <iostream>
using namespace std;

int main() {
    bool x = true, y = false;
    cout << (x && y) << endl; // false
    cout << (x || y) << endl; // true
    cout << (!x) << endl;     // false
    return 0;
}