#include<iostream>
using namespace std;
int main()
{
    int a[] = {2,2,4,6,8};
    int max = a[0];
    for(int x:a)
    {
        if(x>max)
        {
            max = x;
        }

    }
    cout<<max;
}
