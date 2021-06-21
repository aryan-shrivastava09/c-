#include<iostream>
using namespace std;

int g = 0;

void fun()
{
    int a =5;
    g+=a;
    cout<<a<<endl;
}

int main()
{
    g = 15;
    fun();
    g++;
    cout<<g<<endl;
}
