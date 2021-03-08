#include<iostream>
using namespace std;
int main()
{
    int n, i,sum=0;
    cout<<"Enter a no."<<endl;
    cin>>n;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum += i;
        }
    }
    if(sum==n)
    {
        cout<<"Perfect Number"<<endl;
    }
    else
    {
        cout<<"Not a perfect number"<<endl;
    }
    return 0;
}
