#include<iostream>
using namespace std;
int main()
{
    int *p= new int[20];
    p[19] = 20;
    cout<<p[19]<<endl;
    delete []p;
    p = new int[40];
    p[39] = 40;
    cout<<p[39]<<endl;
}
