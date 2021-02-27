#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a,b,c;
    float r1,r2;
    cout<< "Enter the coefficients of the quadratic equation, in order a b c ";
    cin>>a>>b>>c;
    if((b*b-4*a*c)>=0)
    {   r1 = (-b + sqrt(b*b-4*a*c))/(2*a);
        r2 = (-b - sqrt(b*b-4*a*c))/(2*a);
        cout <<"The roots are "<<r1<<" and "<<r2;
    }
    else
        cout << "No Roots";

    return 0;

}
