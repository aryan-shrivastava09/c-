#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"Enter base length of triangle"endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j+i<=n)
            {
                cout<<" ";
            }
            else
            {
                cout<<"*";
            }
        }
        cout<<endl;
    }
}
