#include<iostream>
using namespace std;

class Test
{
private:
    int a;
protected:
    int b;
public:
    int c;
friend void fun();
};

void fun()
{
    Test t;
    t.a = 5;
    t.b = 10;
    t.c =15;
}

int main()
{
    fun();
}
