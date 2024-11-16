#include<iostream>
using namespace std;
int main()
{
    cout << endl;

    int a = 10;
    int *b = &a;
    int &c = a;

    c = c+20;
    cout << a << endl;
    a = a+1;
    cout << c << endl;

    if(&c == &a) cout << "Denotes same memory location." << endl;
    cout << "Prove : " << endl << 
                "\taddress of a : " << &a << endl << 
                "\taddress of c : " << &c << endl << endl;
    return 0;
}