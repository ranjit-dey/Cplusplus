#include<iostream>
using namespace std;
int add(int, int, int); 
int add(int a, int b=0, int c=0){ // agian default value provides
    return a+b+c; 
}
int main()
{
    cout << add(45,1);
}
