#include<iostream>
using namespace std;

class Myexception:public exception
{
public:
    char * what()
    {
        return "My exception";
    }
};

int division(int x, int y)
{
    Myexception m;
    if(y==0)
        throw m;
    return x/y;
}

int main()
{
    int a= 10, b =0, c= 1;
    try
    {
        c = division(a,b);
        cout<<c;
    }
    catch(Myexception &a)
    {
        cout<<a.what();
    }
}
