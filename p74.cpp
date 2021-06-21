#include<iostream>
using namespace std;
int main()
{
    char s1[100];
    char s2[100];
    cout<<"Enter your name  ";
    cin.get(s1,100);
    cout<<s1<<endl;

    // get won't read the second string refer to notes
    // solution is the line below
    cin.ignore();

    cout<<"Enter your name again ";
    cin.get(s2,100);
    cout<<s2;
}
