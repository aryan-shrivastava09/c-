#include<iostream>
using namespace std;

class Base
{
public:
    void fun1()
    {
        cout<<"Fun 1 of base"<<endl;
    }
    void fun2()
    {
        cout<<"Fun 2 of base"<<endl;
    }
};

class Derived:public Base
{
public:
    void fun3()
    {
        cout<<"Fun 3 of derived"<<endl;
    }
    void fun4()
    {
        cout<<"Fun 4 of derived"<<endl;
    }
};

int main()
{
    Base *b;
    b = new Derived();
    b -> fun1();
    b->fun2();
}
