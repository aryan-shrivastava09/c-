#include<iostream>
using namespace std;
int main()
{
    int i, j, c = 1, n;
    cout<<"Enter the side of square"<<endl;
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<c<<"   ";
            c++;
        }
        cout<<endl;
    }
}
