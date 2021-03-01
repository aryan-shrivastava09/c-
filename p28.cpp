#include<iostream>
using namespace std;
int main()
{
    int a=10,b=5;
    if(true)
    {
        int c;
        c = a+b;
        cout<<c<<endl;
    }
    // cout<<c;
    // Above statement won't work as c has been declared only inside the if block

    if(int c = a+b;c>10)
    {
        cout<<"C greater than 10";
    }
}
