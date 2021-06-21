#include<iostream>
using namespace std;
int add(int x, int y, int z=0)
{
    return x+y+z;
}

int main()
{
    int c = add(2,5);
    int d = add(2,5,7);
    int e = add(2,5,0);
    cout<<c<<endl;
    cout<<d<<endl;
    cout<<e<<endl;
}
