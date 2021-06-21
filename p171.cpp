#include<iostream>
using namespace std;

class Demo
{
public:
    Demo()
    {
        cout<<"Demo created"<<endl;
    }
    ~Demo()
    {
        cout<<"Demo destroyed"<<endl;
    }
};

int main()
{
    Demo *p = new Demo();
    delete p;
}
