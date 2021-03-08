#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,m,d,i=0,rev=0;
    cout<<"Enter a number"<<endl;
    cin>>n;
    m=n;
    while(m!=0)
    {
        i++;
        m=m/10;
    }
    while(n!=0)
    {
        d= n%10;
        rev +=d*(pow(10,i-1));
        i--;
        n=n/10;
    }
    cout<<"Reverse of the number is "<<rev;
}
