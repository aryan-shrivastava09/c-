#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter an age"<<endl;
    cin>>age;
    if(age<12 || age>50)
    {
        cout<<"Valid age for offer";
    }
    else
    {
        cout<<"Invalid age for offer";
    }
    return 0;
}
