#include<iostream>
using namespace std;

class Demo
{
private:
    int x = 10;
    int y = 20;
public:
    void Display() const
    {
        //++x; will throw error
        cout<<x<<" "<<y;
    }
};

int main()
{
    Demo d;
    d.Display();
}
