#include<fstream>
using namespace std;
int main()
{
    ofstream outfile("My.txt", ios::app);
    outfile<<"Hello"<<endl;
    outfile<<"25"<<endl;
}
