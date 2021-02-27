#include<iostream>
using namespace std;
int main()
{
    char c = 127;
    ++c;
    cout<<(int)c<<endl; // The concept of overflow
    return 0;
}
