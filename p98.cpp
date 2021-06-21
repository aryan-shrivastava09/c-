#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1 = "Hello";
    char des[10];
    s1.copy(des, 3);
    des[3] = "\0";
    cout<<des;
}
