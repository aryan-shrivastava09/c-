#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s,username;
    int pos =0;
    cout<<"Enter an e-mail id "<<endl;
    getline(cin,s);
    pos = s.find('@');
    username = s.substr(0,pos);
    cout<<"Username: "<<username;


}
