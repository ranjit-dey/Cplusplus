#include<iostream>
using namespace std;

int Add(int=0, int=0, int=0);

int main()
{
    cout << endl;

    int x = 45;
    int y = 20;
    int z = 10;

    cout << "the sum : " << Add() << endl;
    cout << "the sum of " << x << " is : " << Add(x) << endl; 
    cout << "the sum of " << x << " + " << y << " is : " << Add(x+y) << endl;
    cout << "the sum of " << x << " + " << y << " + " << z << " is : " << Add(x+y+z) << endl;
    cout << endl;
    return 0;
}

int Add(int firstNum, int secondNum, int thirtNum)
{
    return firstNum+secondNum+thirtNum;
}