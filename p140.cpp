#include<iostream>
using namespace std;

class Complex
{
private:
    int real;
    int img;
public:
    Complex(int r =0, int i = 0)
    {
        real = r;
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
    Complex operator+(Complex x)
    {
        Complex temp;
        temp.real = real + x.real;
        temp.img = img + x.img;
        return temp;
    }
};

int main()
{
    Complex C1(2,4);
    Complex C2(4,2);
    Complex C3;
    C3 = C1 + C2;
    cout<<C3.getReal()<<endl;
    cout<<C3.getImg()<<endl;
}
