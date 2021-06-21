#include<iostream>
using namespace std;

class Complex
{
private:
    int real;
    int img;
public:
    Complex(int r = 0, int i=0)
    {
        real =r;
        img = i;
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
};

Complex operator+(Complex c1, Complex c2)
{
    Complex t;
    t.real = c1.real + c2.real;
    t.img = c1.img + c2.img;
    return t;
}

int main()
{
    Complex c1(2,6);
    Complex c2(6,2);
    Complex c3;
    c3 = c1 + c2;
    cout<<c3.getReal()<<"+i"<<c3.getImg()<<endl;
}
