#include<iostream>
using namespace std;

class Outer
{
private:
    int a;
    static int b;
public:
    void fun()
    {
        i.display();
    }
    class Inner
    {
        public:
        void display()
        {
            b = 20;
            cout<<b<<endl;
        }
    };
    Inner i;
};

int Outer::b = 20;

int main()
{
    Outer o;
    o.fun();
}
