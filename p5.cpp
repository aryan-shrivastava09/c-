#include<iostream>
using namespace std;
int main()
{
    int n,s;
    cout<< "Enter the number up to which the sum is to be calculated ";
    cin >> n;
    s = n*(n+1)/2;
    cout << "The sum is "<<s;
    return 0;
}
