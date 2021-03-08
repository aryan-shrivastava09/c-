#include<iostream>
using namespace std;
int main()
{
    int n, i, p= 1;
    cout<<"Enter a number"<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        p *= i;
    }
    cout<<p;
}
