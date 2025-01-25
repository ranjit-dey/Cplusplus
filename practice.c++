#include <iostream>
#include <vector>

using namespace std;

struct student
{
    char name[50];
    int age;
    char section;
} typedef details;

void addStudent(details stu)
{
    cin.ignore();

    cout << "Enter student name : ";
    cin.getline(stu.name, 50);

    cout << "Enter student age : ";
    cin >> stu.age;

    cin.ignore();

    cout << "Enter student section : ";
    cin >> stu.section;

    cout << endl;
}

void printDetails(details students)
{
    cout << "------------------------------------" << endl;
    cout << "Name:\t" << students.name << endl;
    cout << "Age:\t" << students.age << endl;
    cout << "Section:" << students.section << endl;
    cout << "------------------------------------" << endl
         << endl;
}

int main()
{
    cout << endl;

    // int total_no_student;
    // cout << "Enter total no. of student: ";
    // cin >> total_no_student;

    while (true)
    {
        int choice;
        static int i = 0;

        cout << "1. Add student" << endl;
        cout << "2. Display all student" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice : ";
        cin >> choice;

        cout << endl
             << endl;

        details stu[i];

        if (choice == 1)
        {
            addStudent(stu[i]);
            cout << "------------------------------------" << endl;
            cout << "Name:\t" << stu[i].name << endl;
            cout << "Age:\t" << stu[i].age << endl;
            cout << "Section:" << stu[i].section << endl;
            cout << "------------------------------------" << endl
                 << endl;
            i++;
        }
        else if (choice == 2)
        {
            for (int num = 0; num < i; num++)
            {
                printDetails(stu[num]);
            }
        }
        else if (choice == 3)
        {
            cout << endl
                 << "Thanks for using...." << endl;
            break;
        }
        else
        {
            cout << " --              Invalid Choice              -- " << endl;
            cout << " --   Enter 1 to add student or 2 to exit.   -- " << endl
                 << endl;
        }
    }

    cout << endl;
    return 0;
}