#include<iostream>
using namespace std;
int main()
{
    int i,j,c = 1,n;
    cout<<"Enter base length of triangle";
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            cout<<c<<" ";
            c++;
        }
        cout<<endl;
    }
}
