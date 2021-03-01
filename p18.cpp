#include<iostream>
using namespace std;
int main()
{
    int r;
    cout<<"Enter a rollno"<<endl;
    cin>>r;
    if(r<1)
    {
        cout<<"Invalid Rollno";
    }
    else
    {
        cout<<"Valid rollno";
    }
    return 0;
}
