#include<iostream>
using namespace std;
inline int calculateCube(int); // inline keyword used
int main()
{
    cout << endl << endl;

    int number, result;
    cout << "Enter a number: ";
    cin >> number;

    result = calculateCube(number);
    cout << "value: " << result;

    cout << endl << endl;
    return 0;
}

int calculateCube(int num){
    return num*num*num;
}