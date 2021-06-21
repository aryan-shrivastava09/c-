#include<iostream>
using namespace std;
int Max(int a,int b,int c)
{
    if(a>b)
    {
        if(a>c)
        {
            return a;
        }
        else
        {
            return c;
        }
    }
    else
    {
        if(b>c)
        {
            return b;
        }
        else
        {
            return c;
        }
    }
}


int main()
{
    int n1,n2,n3,mx;
    cout<<"Enter 3 numbers: "<<endl;
    cin>>n1>>n2>>n3;
    mx = Max(n1,n2,n3);
    cout<<"Maximum: "<<mx;
    return 0;
}
