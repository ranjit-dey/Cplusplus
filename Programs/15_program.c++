#include<iostream>
using namespace std;

class Employee
{
    public :
        int age, salary;

        // Default Constructor
        Employee() 
        {
            cout << "I am here";
        }

        // parameterized constructor
        Employee( int age1, int salary1)
        {
            age = age1;
            salary = salary1;
        }

        Employee(const Employee &ex)
        {
            age = ex.age;
            salary = ex.salary;

            cout << "age : " << age << endl;
            cout << "salary : " << salary << endl;
        }

};

int main()
{
    cout << endl;

    Employee e1(20, 3000);
    // Employee e1;   // -> error
    // Employee e2; // call to default constructor
    
    Employee e2 = e1; // => Employee e2(e1) => e1 act like a parameter
    cout << endl;
    return 0;
}