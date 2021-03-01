#include<iostream>
using namespace std;
int main()
{
    int m1,m2,m3;
    float avg;
    cout<<"Enter marks in three subjects"<<endl;
    cin>>m1>>m2>>m3;
    if(m1>=0 && m2>=0 && m3>=0)
    {avg = (m1+m2+m3)/3.0;
    if(avg>=60)
    {
        cout<<"A";
    }
    else if(avg>=35 && avg<60)
    {
        cout<<"B";
    }
    else
    {
        cout<<"C";
    }
    }
    else
    {
        cout<<"Invalid Marks";
    }
}
