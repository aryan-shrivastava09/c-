#include<iostream>
using namespace std;

class Test
{
private:
    int a;
    int b;
public:
    static int c;
    Test()
    {
        a=10;
        b=10;
        c++;
    }
};

int Test::c=0;

int main()
{
    Test t1;
    Test t2;
    cout<<t1.c<<endl;
    cout<<t2.c<<endl;
    cout<<Test::c<<endl;
}
