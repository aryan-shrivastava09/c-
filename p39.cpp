#include<iostream>
using namespace std;
int main()
{
    int n,i, c=0;
    cout<<"Enter a number"<<endl;
    cin>>n;
    if(n==0)
    {
        cout<<"0 is neither prime nor composite";
    }
    else
    {
    for(i=1;i<=n;i++)
    {
      if(n%i==0)
      {
          c++;
      }
    }
    if(c==2)
    {
        cout<<"Prime Number";
    }
    else
    {
        cout<<"Composite number";
    }
    }
}
