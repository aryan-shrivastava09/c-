#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter a number"<<endl;
    cin>>n;
    for(i=1; i<= 10; i++)
    {
        cout<<n<<"X"<<i<<" = "<<n*i<<endl;
    }
}
