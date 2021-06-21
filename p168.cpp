#include<iostream>
using namespace std;

int fun(const int &x, int &y)
{
    // x++; will throw error
    cout<<x<<" "<<y;
}

int main()
{
    int a = 10, b =20;
    fun(a,b);
}

