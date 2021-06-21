#include<iostream>
using namespace std;
int Max(int x, int y)
{
    return x>y?x:y;
}
int Min(int x, int y)
{
    return x<y?x:y;
}
int main()
{
    int a=10, b= 5;
    int ma, mi;
    int (*fp)(int,int);
    fp = Max;
    ma = (*fp)(a,b);
    fp = Min;
    mi = (*fp)(a,b);
    cout<<ma<<endl;
    cout<<mi<<endl;
}

