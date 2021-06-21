#include<iostream>
using namespace std;
#define PI 3.1425
#define MSG(x) #x
#ifndef MSG
    #define MSG(x) #x
#endif

int main()
{
    cout<<PI<<endl;
    cout<<MSG(HELLO);
}
