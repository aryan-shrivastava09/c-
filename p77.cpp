#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char s1[] = "Hello";
    char s2[10] = "";
    // strcpy(s2,s1);
    strncpy(s2,s1,2);
    cout<<s2;
}
