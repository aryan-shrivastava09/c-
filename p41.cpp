#include<iostream>
using namespace std;
int main()
{
    int n, n1,d, sum=0;
    cout<<"Enter a number"<<endl;
    cin>>n;
    n1 = n;
    while(n!=0)
    {
        d = n%10;
        sum += d*d*d;
        n=n/10;
    }
    if(sum==n1)
    {
        cout<<"Armstrong Number";
    }
    else
    {
        cout<<"Not an Armstrong number";
    }
    return 0;
}
