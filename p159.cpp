#include<iostream>
using namespace std;

int main()
{
    int a =20, b= 0, c= 5;
    try
    {
        if(b==0)
            throw 1;
        c = a/b;
        cout<<c<<endl;
    }
    catch(int e)
    {
        cout<<"Division by 0"<<endl;
    }
}
