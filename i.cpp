#include <iostream>
using namespace std;
struct Student {
    string name;
    int age;
};
int main() {
    Student s1 = {"nurtilek", 18};
    cout << "name: " << s1.name << ", age: " << s1.age << endl;
    return 0;
}