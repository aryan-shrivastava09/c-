#include<iostream>
using namespace std;
template<class T>
T maximum(T x, T y)
{
    if(x>y)
    {
        return x;
    }
    else if(x<y)
    {
        return y;
    }
}

int main()
{
    int c = maximum(10,5);
    float d = maximum(10.5f,5.5f);
    cout<<c<<endl;
    cout<<d<<endl;
}
