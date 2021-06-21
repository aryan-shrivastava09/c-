#include<iostream>
using namespace std;

class Test
{
    int a;
    int *p;
public:
    Test(int x)
    {
        a = x;
        p = new int[a];
    }
    /* Test(Test t)
    {
        a = t.a;
        p = t.p;  This p will point to the same array created by t
    }
    DEEP COPY CONSTRUCTOR */
    Test(Test &t)
    {
        a = t.a;
        p = new int[a];
    }
};
int main()
{
    Test t(5);
    Test t2(t);
}
