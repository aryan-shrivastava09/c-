#include<iostream>
using namespace std;
const float pi = 3.14;
int main()
{
    float r, area;
    cout<<"Enter the radius "<<endl;
    cin>>r;

    area = pi*r*r;
    cout<<"Area = "<<area;
    return 0;
}
