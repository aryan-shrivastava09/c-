#include<iostream>
using namespace std;
int main()
{
    float amount, discount;
    cout<<"Enter Amount"<<end;;
    cin>>amount;
    if(amount>=500)
    {
        discount = 0.20*amount;
        cout<<discount;
    }
    else if(amount<500 && amount>=100)
    {
        discount = 0.10*amount;
        cout<<discount;
    }
    else
    {
        discount = 0;
        cout<<discount;
    }

}
