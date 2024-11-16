#include<iostream>
using namespace std;

int max(int, int, int, int);
int max(int, int, int);
int max(int, int);

int main()
{
    cout << endl;

    cout << "Max of (1, 7, 8, 11) : " << max(1,7,8,11) << endl;
    cout << "Max of (1, 8, 6) : " << max(1,8,6) << endl;
    cout << "Max of (8, 6) : " << max(8,6) << endl;

    cout << endl;
    return 0;
}

int max(int a, int b, int c , int d)
{
    if(a > b){
        if(a > c){
            if(a > d) return a;
            return d;
        }
        else{
            if(c > d) return c;
            return d;
        }
    }
    else{
        if(b > c){
            if(b > d) return b;
            return d;
        }
        else{
            if(c > d) return c;
            return d;
        }
    }
}

int max(int a, int b , int c)
{
    return a > b ? a > c ? a : c : b > c ? b :c;
}

int max(int a, int b)
{
    return a > b ? a : b;
}
