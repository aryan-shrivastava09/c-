#include<iostream>
using namespace std;

int ls(int n[10],int n1)
{
    int p = -1;
    for(int i=0; i< 10; i++)
    {
        if(n[i]==n1)
          {
              p = i;
          }
    }
    return p;
}

int main()
{
    int a[10];
    int b, pos;
    cout<<"Enter 10 elements for the array: ";
    for(int i =0; i<10; i++)
    {
        cin>>a[i];
    }
    cout<<"Enter an element to be searched in the array: ";
    cin>>b;
    pos = ls(a, b);
    if(pos>0)
    {
        cout<<b<<" is found at "<<pos<<endl;
    }
    else
    {
        cout<<"element not found";
    }
}


