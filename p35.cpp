#include<iostream>
using namespace std;
int main()
{
    int n, i,sum =0;
    cout<<"Enter number up to which the sum is required"<<endl;
    cin>>n;
    for(i=0;i<=n;i++)
    {
        sum += i;
    }
    cout<<sum<<endl;
    return 0;
}
