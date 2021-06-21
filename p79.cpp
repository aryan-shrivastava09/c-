#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char s[] = "Programming";
    char c = 'm';
    if(strchr(s,c)!=NULL)
        cout<<strchr(s,c);
    else
        cout<<"Not found";

}
