#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char s1[100] = "Good";
    char s2[100] = "Morning";

    cout<<strcat(s1,s2)<<endl;
    cout<<strncat(s1,s2,3);
}
