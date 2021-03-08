#include<iostream>
using namespace std;
int main()
{
    int a,b,i,m,gdc;
    cout<<"Enter two numbers"<<endl;
    cin>>a>>b;
    if(a>b)
    {
        m=b;
    }
    else
    {
        m=a;
    }

    for(i=1;i<=m;i++)
    {
        if(a%i==0 && b%i==0)
        {
            gdc = i;
        }

    }
    cout<<gdc;
    return 0;
}
