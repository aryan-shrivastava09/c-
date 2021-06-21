#include<iostream>
using namespace std;

class Parent
{
public:
    void display()
    {
        cout<<"Display Parent"<<endl;
    }
};

class child:public Parent
{
public:
    void display()
    {
        cout<<"Display Child"<<endl;
    }
};

int main()
{
    Parent P;
    child c;
    P.display();
    c.display();
}

