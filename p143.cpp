#include<iostream>
using namespace std;

class RationalNumber
{
private:
    int p;
    int q;
public:
    RationalNumber(int p = 0, int q = 1)
    {
        this->p = p;
        this->q = q;
    }
    friend RationalNumber operator+(RationalNumber r1, RationalNumber r2);
    friend ostream & operator<<(ostream &o, RationalNumber &r);
};

RationalNumber operator+(RationalNumber r1, RationalNumber r2)
{
    RationalNumber r3;
    r3.q = r1.q*r2.q;
    r3.p = r1.p*r2.q + r2.p*r1.q;
    return r3;
}

ostream & operator<<(ostream &o, RationalNumber &r)
{
    cout<<r.p<<"/"<<r.q;
    return o;
}

int main()
{
    RationalNumber r1(2,3), r2(4,3), r3;
    r3 = r1+r2;
    cout<<r3<<endl;
}
