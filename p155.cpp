#include<iostream>
using namespace std;

class your;
class My
{
private:
    int a;
friend your;
};

class your
{
    My m;
public:
    int fun()
    {
        m.a = 10;
        return m.a;
    }
};

int main()
{
    your y;
    cout<<y.fun();
}
