#include<iostream>
#include<string.h>
using namespace std;

struct patient{
    char name[30];
    int age;
    char services[100];

    void input(){
        cout << "Enter patient name : ";
        cin.getline(name, 30);

        cout << "Enter patient age : ";
        cin >> age;

        cin.ignore();
        cout << "Enter your problem : ";
        cin.getline(services, 100);
    }

    void printPatientDetails(){
        cout << "--------------------" << endl;
        cout << "Patient's Details : " << endl;
        cout << "--------------------" << endl;
        cout << "Name\t: " << name << endl;
        cout << "Age\t: " << age << endl;
        cout << "Problem\t: " << services << endl;
    }
};

int main()
{
    cout << endl;

    patient p2;
    p2.age = 12;
    strcpy(p2.name, "Hello World");
    strcpy(p2.services, "Hello world tech programming language devops machine learning");

    p2.printPatientDetails();

    patient p1;
    p1.input();
    p1.printPatientDetails();

    cout << endl;
    return 0;
}