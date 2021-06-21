#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s = "Hello";
    string::iterator it;
    for(it = s.begin(); it!= s.end();it++)
    {
        cout<<*it<<endl;
    }
}
