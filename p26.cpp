#include<iostream>
using namespace std;
int main()
{
    float amount, disamount;
    cout<<"Enter Amount"<<endl;
    cin>>amount;
    if(amount>=5000)
    {
        disamount = amount - (amount*20/100.0);
    }
    else if(amount>=2000 && amount<5000)
    {
        disamount = amount - (amount*10/100.0);
    }
    else
    {
        disamount = amount - (amount*5/100.0);
    }
    cout<<disamount;
    return 0;
}
