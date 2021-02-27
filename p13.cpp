#include<iostream>
using namespace std;
enum day {mon,tue,wed,thu,fri,sat,sun}; // substitute for const and #define
// #define mon 0;
// const int mon =0;
int main()
{
    day d;
    d = mon;
    cout<<d<<endl;
    cout<<tue<<endl;
    return 0;
}
