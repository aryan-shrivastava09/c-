#include<iostream>
using namespace std;

int division(int x, int y)
{
    if(y==0)
        throw 1;
    else
        return x/y;
}

int main()
{
    int a = 10, b =0, c =1;
    try
    {
        c = division(a,b);
        cout<<c<<endl;
    }
    catch(int e)
    {
        cout<<e<<" b = 0"<<endl;
    }
}
