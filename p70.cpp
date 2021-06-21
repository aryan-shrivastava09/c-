#include<iostream>
using namespace std;
int main()
{
    int A[] = {2,4,6,8,10,12};
    int *p = A;
    p++;
    cout<<*p<<endl;
    p+=3;
    cout<<p[-4];
}
