#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int> l = {10,20,30,40};
    l.push_front(0);
    l.push_back(50);
    l.push_back(60);
    l.pop_back();
    list<int>::iterator itr;
    for(itr = l.begin(); itr!= l.end(); itr++)
    {
        cout<<*itr<<endl;
    }
}
