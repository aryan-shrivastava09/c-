#include<iostream>
using namespace std;
int main()
{
    int i, n, l=0, h=0, mid, A[10]={2,4,6,8,10,12,14,16,18,20};
    for(int x:A)
    {
        h++;
    }
    h = h-1;
    cout<<"Enter a number to search"<<endl;
    cin>>n;
    while(l <= h)
    {
        mid = (l + h)/2;
        if(A[mid]==n)
        {
            cout<<n<<" found at "<<mid;
            return 0;
        }
        else if(A[mid]<n)
        {
            l = mid+1;
        }
        else
        {
            h = mid-1;
        }
    }
    cout<<"Number not found";
}
