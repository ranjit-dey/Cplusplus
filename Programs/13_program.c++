#include<iostream>
using namespace std;

class Family{
public :
    int a, b;
    static int member;
};

int Family::member;

int main()
{
    cout << endl;

    cout << Family::member << endl;

    Family f1, f2;
    f1.a = 12;
    f2.b = 13;
    f2.member = 120;
    // f1.member = 140;

    cout << f1.a << " " << f2.b << " " << f2.member << " " << Family::member++ << endl;

    cout << f1.member;
    cout << endl;
    return 0;
}