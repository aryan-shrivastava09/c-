#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v = {10,20,30,40};
    v.push_back(50);
    v.push_back(60);
    v.pop_back();
    vector<int>::iterator itr = v.begin();
    for(itr = v.begin();itr!=v.end();itr++)
    {
        cout<<*itr<<endl;
    }
}
