#include<iostream>
#include<string.h>
using namespace std;

class Student{

private:
    char name[50];
    int age;
    float marks;

public:
    void printDetails(); // Declaration
    void takeInput();
};


// Definition of two function which is declared inside the class
void Student::printDetails(){
    cout << "Name\t: " << name << endl;
    cout << "Age\t: " << age << endl;
    cout << "Marks\t: " << marks << endl << endl;
}

void Student::takeInput(){
    cout << "Enter your name\t: ";
    cin.getline(name, 50);

    cout << "Enter your age\t: ";
    cin >> age;

    cout << "Enter your marks: ";
    cin >> marks;

    cout << endl << endl ;

    cin.ignore(); // absorb the nextline character
}

int main()
{
    cout << endl;

    Student s[4];

    for(int i=0; i<4; i++)
    {
        s[i].takeInput();
    }

    for(int i=0; i<4; i++)
    {
        s[i].printDetails();
    }

    cout << endl;
    return 0;
}