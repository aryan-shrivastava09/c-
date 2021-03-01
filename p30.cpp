#include<iostream>
using namespace std;
int main()
{
    cout<<"Menu: "<<endl;
    cout<<"1.Add \n2.Subtract \n3.Multiply \n4.Divide"<<endl;
    int option;
    cout<<"Enter a choice"<<endl;
    cin>>option;
    int a,b,c;
    cout<<"Enter 2 numbers"<<endl;
    cin>>a>>b;
    switch(option)
    {
        case 1: c = a+b;
        cout<<c;
        break;
        case 2: c = a-b;
        cout<<c;
        break;
        case 3: c= a*b;
        cout<<c;
        break;
        case 4: c = a/b;
        cout<<c;
        break;
        default: cout<<"Invalid Choice";
    }

}
