#include<iostream>
using namespace std;

int main()
{
    const int x = 10;
    // x++; will throw error
    cout<<x<<endl;
    int y = 20;
    const int *ptr = &y;
    // ++(*ptr); will throw error
    cout<<*ptr<<endl;
    int z = 30;
    ptr = &z;
    cout<<*ptr;
}
