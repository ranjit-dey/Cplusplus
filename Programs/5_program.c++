#include<iostream>
using namespace std;

void f(int, int); // call by value
void fun(int *, int *); // call by address
void function(int &, int &); // call by reference

int main()
{
    cout << endl;

    // call by value

    f(10, 15);

    // call by address

    int a = 10, b = 20;
    fun(&a, &b);

    // call by reference

    int m = 50, n = 40;
    function(m, n);

    cout << "value of m: " << m << ", " << "value of n: " << n << endl;
    cout << endl;
    return 0;
}

void f(int a, int b){
    cout << a << " + " << b << " = " << a+b << endl; 
}

void fun(int *num1, int *num2){
    cout << *num1 << " + " << *num2 << " = " << *num1 + *num2 << endl;
}

void function(int &num1, int &num2){
    cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
    num1 = 23;
    num2 = 32;
}