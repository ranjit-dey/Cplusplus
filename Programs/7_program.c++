#include<iostream>
#include<string.h>
using namespace std;

// created structure of student
struct student {
    char name[30];
    int age;
    float CGPA;
    char section;
} typedef details; // assign a nickname details

/*
we can't write the function above the struct student 
variable because before use a variable we must have to declare it first
*/

// funtion to take input
details input(){  
    details student; // created a struct student variable

    // taking input from user
    cin.ignore();

    cout << endl;
    cout << "Enter name of the student : ";
    cin.getline(student.name, 30);


    cout << "Enter " << student.name << "'s age : ";
    cin >> student.age;

    cout << "Enter " << student.name << "'s section : ";
    cin >> student.section;

    cout << "Enter " << student.name << "'s CGPA : ";
    cin >> student.CGPA;

    return student;
}

// function to print the details 
void printDetails(details student){
    int total_no_character = 10+strlen(student.name);

    cout << endl;
    for(int i=1; i <= total_no_character; i++) cout << "-";
    cout << endl;

    cout << "Student Details" << endl;

    for(int i=1; i <= total_no_character; i++) cout << "-";
    cout << endl;

    cout << "Name\t: " << student.name << endl;
    cout << "Age\t: " << student.age << endl;
    cout << "Section\t: " << student.section << endl;
    cout << "CGPA\t: " << student.CGPA << endl;

    for(int i=1; i <= total_no_character; i++) cout << "-";
    cout << endl << endl;

    
}


int main()
{
    cout << endl;

    // type 1
    struct student s1 = {"Ranjit Dey",21, 8.6, 'C'};
    printDetails(s1);


    // type 2
    details s2;
    s2.age = 12;
    s2.section = 'C';
    s2.CGPA = 8;
    strcpy(s2.name, "Hori bol");
    printDetails(s2);

    // type 3
    int total_number_student;
    cout << "Enter total number of student : ";
    cin >> total_number_student;

    details X[total_number_student];

    for(int i = 0; i < total_number_student; i++){
        X[i] = input();
    }

    for(int i = 0; i < total_number_student; i++){
        printDetails(X[i]);
    }

    cout << endl;
    return 0;
}