#include<iostream>
using namespace std;
int main()
{
    int A[10], n,i,c = false;
    cout<<"Enter 10 numbers"<<endl;
    for(i=0;i<10;i++)
    {
        cin>>A[i];
    }
    cout<<"Enter number to be searched"<<endl;
    cin>>n;
    for(i = 0; i<10; i++)
    {
        if(A[i] == n)
        {
            cout<<n<<" found at "<<i;
            c = true;
        }
    }
    if(c==false)
    {
        cout<<"Element not found";
    }
}
