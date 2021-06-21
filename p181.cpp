#include<iostream>
using namespace std;
int main()
{
    int a = 10;
    int b = 20;
    [&]()->int{a=a+b; cout<<a<<" "<<b<<endl;}();
    cout<<a<<" "<<b;
}

