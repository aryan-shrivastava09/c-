#include<iostream>
using namespace std;
int main()
{
    int A[10] = {1,2,3,4,5,6,7,8,9};
    int x =10;
    int *p = A;
    int *q = &A[3];
    int d;
    cout<<*p<<endl;
    p++;
    cout<<*p<<endl;
    p--;
    cout<<*p<<endl;
    p +=2;
    cout<<*p<<endl;
    p -=2;
    cout<<*p<<endl;
    d = q - p;
    cout<<d<<endl;
}
