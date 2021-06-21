#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char s[] = "x=10;y=20;z=35";
    char *token = strtok(s,"=;");
    while(token!=NULL)
    {
        cout<<token<<endl;
        token = strtok(NULL,"=;");
    }
}
