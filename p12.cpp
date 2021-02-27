#include<iostream>
using namespace std;
int main()
{
    int x = 5, y =7;
    int z;
    z = x&y;
    cout<<z<<endl;
    z = x|y;
    cout<<z<<endl;
    z = x^y;
    cout<<z<<endl;
    z = ~x;
    cout<<z<<endl;
    z = x<<1;
    cout<<z<<endl;
    z = y>>1;
    cout<<z<<endl;
    return 0;
}
