#include<iostream>
#include<string.h>
using namespace std;

// created structure of student
struct student {
    char name[30] = "";
    int age = 0;
    float CGPA = 0;
    char section = '0';

    // input function
    void input(){  
        // taking input from user
        cin.ignore();

        cout << endl;
        cout << "Enter name of the student : ";
        cin.getline(name, 30);


        cout << "Enter " << name << "'s age : ";
        cin >> age;

        cout << "Enter " << name << "'s section : ";
        cin >> section;

        cout << "Enter " << name << "'s CGPA : ";
        cin >> CGPA;
    }

    // display function
    void printDetails(){
        int total_no_character;
        if(name=="") total_no_character = strlen("Student Details");
        total_no_character = 10+strlen(name);

        cout << endl;
        for(int i=1; i <= total_no_character; i++) cout << "-";
        cout << endl;

        cout << "Student Details" << endl;

        for(int i=1; i <= total_no_character; i++) cout << "-";
        cout << endl;

        cout << "Name\t: " << name << endl;
        cout << "Age\t: " << age << endl;
        cout << "Section\t: " << section << endl;
        cout << "CGPA\t: " << CGPA << endl;

        for(int i=1; i <= total_no_character; i++) cout << "-";
        cout << endl << endl;
    }

} typedef details; // assign a nickname details


int main()
{
    cout << endl;

    // type 1
    student s1 = {"Ranjit Dey",21, 8.6, 'C'};
    s1.printDetails();


    // type 2
    details s2;
    s2.age = 12;
    s2.section = 'C';
    s2.CGPA = 8;
    strcpy(s2.name, "Hori bol");
    s2.printDetails();

    // type 3
    int total_number_student;
    cout << "Enter total number of student : ";
    cin >> total_number_student;

    details X[total_number_student];

    for(int i = 0; i < total_number_student; i++){
        X[i].input();
    }

    for(int i = 0; i < total_number_student; i++){
        X[i].printDetails();
    }

    details s5;
    s5.printDetails();

    cout << endl;
    return 0;
}