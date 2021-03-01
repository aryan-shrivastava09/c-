#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter a number"<<endl;
    cin>>a;
    if(a>0)
    {
        cout<<"positive";
    }
    else if(a<0)
    {
        cout<<"negative";
    }
    else
    {
        cout<<"Neither positive nor negative";
    }

    return 0;
}
