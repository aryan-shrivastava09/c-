#include<iostream>
using namespace std;

class Complex
{
private:
    int real;
    int img;
public:
    Complex(int r=0, int i=0)
    {
        real = r;
        img =i;
    }
    int getReal()
    {
        return real;
    }
    int getImg()
    {
        return img;
    }
    friend Complex operator+(Complex c1, Complex c2);
    friend ostream & operator<<(ostream &o, Complex &c);
};

Complex operator+(Complex c1, Complex c2)
{
    Complex t;
    t.real = c1.real + c2.real;
    t.img = c1.img + c2.img;
    return t;
}

ostream & operator<<(ostream &o, Complex &c)
{
    cout<<c.real<<" + i"<<c.img;
    return o;
}

int main()
{
    Complex c1(2,4), c2(4,2), c3;
    c3 = c1+c2;
    cout<<c3<<endl;
}
