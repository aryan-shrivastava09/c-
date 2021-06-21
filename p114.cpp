#include<iostream>
using namespace std;

int add(int n1,int n2)
{
    int n3;
    n3 = n1+n2;
    return n3;
}

int main()
{
    int a,b,sum;
    cout<<"Enter two numbers"<<endl;
    cin>>a>>b;
    sum = add(a,b);
    cout<<"Sum: "<<sum;
    return 0;
}
