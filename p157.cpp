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
        a = 10;
        b = 10;
        c++;
    }
    static int getcount()
    {
        //a++;  Will throw error, static functions can access only static data members.
        return c;
    }
};

int Test::c = 0;

int main()
{
    cout<<Test::getcount()<<endl;
    Test t1;
    cout<<t1.getcount()<<endl;
}
