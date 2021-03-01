#include<iostream>
using namespace std;
int main()
{
    int w;
    cout<<"enter an hour of the day: "<<endl;
    cin>>w;
    if(w>=9 && w<=18)
    {
        cout<<"Working Hour";
    }
    else
    {
        cout<<"Leisure hour";
    }
    return 0;
}

