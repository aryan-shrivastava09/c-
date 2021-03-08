#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,d,n1;
    cout<<"Enter a number"<<endl;
    cin>>n;
    n1=n;
    // To calculate number of digits
    while(n1!=0)
    {
        d = n1%10;
        cout<<d<<endl;
        n1=n1/10;
    }
}
