#include<iostream>
using namespace std;

class Base
{
public:
    Base()
    {
        cout<<"Default Base"<<endl;
    }
    Base(int x)
    {
        cout<<"Parameterized Base"<<endl;
    }
};

class Derived:public Base
{
public:
    Derived()
    {
        cout<<"Default Derived"<<endl;
    }
    Derived(int x)
    {
        cout<<"Parameterized Derived"<<endl;
    }
    Derived(int x, int a):Base(a)
    {
        cout<<"Param Derived"<<" "<<x<<endl;
    }
};

int main()
{
    Derived d;
    Derived c(5);
    Derived a(10,20);
}
