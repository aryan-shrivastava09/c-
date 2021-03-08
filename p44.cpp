#include<iostream>
using namespace std;
int main()
{
    int r,rev=0,n,m;
    cout<<"Enter a number"<<endl;
    cin>>n;
    m=n;
    while(n!=0)
    {
        r = n%10;
        rev = (rev*10) + r;
        n=n/10;
    }
    if(rev==m)
    {
        cout<<"Palindrome";
    }
    else
    {
        cout<<"Not palindrome";
    }
}
