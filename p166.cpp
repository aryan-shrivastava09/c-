#include<iostream>
using namespace std;

int main()
{
    int x = 10;
    int y = 20;
    int *const ptr = &x;
    ++(*ptr);
    // ptr = &y; will throw error
    cout<<*ptr;
    const int *const p = &x;
    // now
    // both ++(*p)
    // and p = &y will throw error
    cout<<*p;
}
