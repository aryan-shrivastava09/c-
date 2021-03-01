#include<iostream>
using namespace std;
int main()
{
    float a,b,c;
    cout<<"Enter divisor and dividend"<<endl;
    cin>>b>>a;
    if(b==0)
    {
        cout<<"Divisor is zero"<<endl;
    }
    else
    {
        c = a/b;
        cout<<c;
    }
    return 0;
}
