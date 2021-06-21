#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main()
{
    ifstream infile;
    infile.open("My.txt");
    if(!infile.is_open())
        cout<<"file Cannot be opened"<<endl;
    string str;
    int x;
    infile>>str;
    infile>>x;
    cout<<str<<" "<<x<<endl;
    if(infile.eof())
        cout<<"End of file reached";
    infile.close();
}
