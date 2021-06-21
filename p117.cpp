#include<iostream>
using namespace std;

int add(int n1,int n2)
{
    return n1+n2;
}

int add(int n1, int n2, int n3)
{
    return n1+n2+n3;
}

float add(float n1, float n2)
{
    return n1+n2;
}

int main()
{
    int a=10,b=5,c;
    float n1= 5.5, n2 = 2.7;
    c = add(a,b);
    cout<<c<<endl;
    cout<<add(a,b,c)<<endl;
    cout<<add(n1,n2);
    return 0;
}
