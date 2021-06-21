#include<iostream>
using namespace std;
int pow(int m,int n)
{
    int ans=1,i;
    for(i = 0;i<n;i++)
    {
        ans = ans * m;
    }
    return ans;
}

int main()
{
    int m,n,p;
    cout<<"Enter a number and its power: "<<endl;
    cin>>m>>n;
    p = pow(m,n);
    cout<<"Answer: "<<p;
    return 0;
}
