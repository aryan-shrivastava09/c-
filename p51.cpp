#include<iostream>
using namespace std;
int main()
{
    int sum = 0, a[] = {2,4,6,8,10};
    for(auto x:a)
    {
        sum += x;
    }
    cout<<sum;
}
