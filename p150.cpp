#include<iostream>
using namespace std;

class base
{
public:
    virtual void fun()
    {
        cout<<"1"<<endl;
    }
};

class derived:public base
{
public:
    void fun()
    {
        cout<<"2"<<endl;
    }
};

int main()
{
    derived d;
    d.fun();
    base *p = &d;
    p->fun();
}

