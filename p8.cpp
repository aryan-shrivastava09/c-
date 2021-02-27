#include<iostream>
using namespace std;
int main()
{
    float v,u,a,s;
    cout<<"Enter Initial velocity, final velocity and acceleration"<<endl;
    cin>>u>>v>>a;
    s = (v*v - u*u)/(2*a);
    cout<<"Displacement = "<<s;
    return 0;
}
