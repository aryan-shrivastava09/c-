#include<iostream>
using namespace std;
int sum(int n,...)
{
    va_list list;
    va_start(list,n);
    int s=0;
    for(i=0;i<n;i++)
    {
        s += va_arg(list,int);
    }
    va_end(list);
    return s;
}

int main()
{
    cout<<sum(2,3,4)<<endl;
    cout<<sum(5,2,4,6,8,10)<<endl;
}
