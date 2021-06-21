#include<iostream>
using namespace std;

class Complex
{
private:
    int a;
    int b;
public:
    Complex(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    friend ostream & operator<<(ostream &o, Complex &c);
};

ostream & operator<<(ostream &o, Complex &c)
{
    cout<<c.a<<" + i"<<c.b;
    return o;
}

int main()
{
    Complex c(5,5);
    cout<<c<<endl;
}
