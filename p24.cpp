#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cout<<"Enter a, b and c:"<<endl;
    cin>>a>>b>>c;
    d = b*b - 4*a*c;
    if(d>=0)
    {
        if(d==0)
        {
            cout<<"real and equal";
        }
        else
        {
            cout<<"real and unequal";
        }
    }
    else
    {
        cout<<"non-real roots";
    }
    return 0;

}
