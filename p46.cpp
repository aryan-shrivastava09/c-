// second method for gcd
#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"Enter two numbers"<<endl;
    cin>>m>>n;
    while(m!=n)
    {
        if(m>n)
        {
            m -=n;
        }
        else
        {
            n -=m;
        }
    }
    cout<<m;
}
