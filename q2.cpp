#include<iostream>
using namespace std;
int main()
{
    float salary, pa, pd, nets;
    cout<<"Enter Salary "<<endl;
    cin>>salary;
    cout<<"Enter percentage of allowances "<<endl;
    cin>>pa;
    cout<<"Enter percentage of deductions "<<endl;
    cin>>pd;

    nets = salary + (salary*pa/100) - (salary*pd/100);
    cout<<"Net salary = "<<nets;
}
