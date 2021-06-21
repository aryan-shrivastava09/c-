#include<iostream>
using namespace std;

int factorial(int n)
{
  if(n>1)
  {
      return n*factorial(n-1);
  }
  else
  {
      return 1;
  }
}

int main()
{
    int a;
    int fact;
    cout<<"Enter a number to find the factorial of: "<<endl;
    cin>>a;
    fact = factorial(a);
    cout<<"Factorial of "<<a<<": "<<fact;
}
