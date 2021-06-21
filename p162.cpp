#include<iostream>
using namespace std;

class MyException1:public exception
{
public:
    char * what()
    {
        return "My exception 1";
    }
};

class MyException2:public MyException1
{
public:
    char * what()
    {
        return "My Exception 2";
    }
};

int main()
{
    int a = 1, b = 0, c = 0;
    MyException1 m1;
    MyException2 m2;
    try
    {
        if(a==0)
            throw m1;
        else if(b==0)
            throw m2;
    }
    catch(MyException2 &d)
    {
        cout<<d.what();
    }
    catch(MyException1 &e)
    {
        cout<<e.what();
    }


}
