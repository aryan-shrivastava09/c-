#include<iostream>
using namespace std;
int main()
{
    int A[2][3] = {{2,4,6},{8,10,12}};
    int B[2][3] = {{3,6,9},{12,15,18}};
    int C[2][3];
    for(int i = 0;i<2;i++)
    {
        for(int j = 0;j<3;j++)
        {
            C[i][j] = A[i][j] + B[i][j];
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }
}
