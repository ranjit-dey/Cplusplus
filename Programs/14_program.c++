#include <iostream>
using namespace std;

class MyClass {
public:
    static int count;

    MyClass() { count++; }   // Constructor increments count
    ~MyClass() { count--; }  // Destructor decrements count

    static void displayCount() {
        cout << "Current count: " << count << endl;
    }
};

int MyClass::count = 0;  // Definition and initialization of static variable

int main() {
    MyClass::displayCount();  // Output: Current count: 0

    MyClass obj1, obj2;
    MyClass::displayCount();  // Output: Current count: 2

    {
        MyClass obj3;
        MyClass::displayCount();  // Output: Current count: 3
    }

    MyClass::displayCount();  // Output: Current count: 2

    return 0;
}