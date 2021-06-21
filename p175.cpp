#include<iostream>
#include<string>
#include<fstream>
using namespace std;
class Student
{
public:
    string Name;
    int Rollno;
    float marks;
    friend ofstream & operator<<(ofstream &ofs, Student &S);
    friend ifstream & operator>>(ifstream &ifs, Student &S);
};

ifstream &operator>>(ifstream &ifs, Student &S)
{
    ifs>>S.Name>>S.Rollno>>S.marks;
    return ifs;
}

ofstream & operator<<(ofstream &ofs, Student &S)
{
    Student temp;
    temp = S;
    ofs<<temp.Name<<endl;
    ofs<<temp.Rollno<<endl;
    ofs<<temp.marks;
    return ofs;
}

int main()
{
    Student S1;
    Student S2;
    S1.Name = "Aryan";
    S1.Rollno = 9;
    S1.marks = 8.67;
    ofstream ofs("Student.txt", ios::trunc);
    ofs<<S1;
    ofs.close();
    ifstream ifs("Student.txt");
    ifs>>S2;
    cout<<"Name: "<<S2.Name<<endl;
    cout<<"Roll no.: "<<S2.Rollno<<endl;
    cout<<"Marks: "<<S2.marks<<endl;
    if(ifs.eof())
        cout<<"End of file reached";
    ifs.close();
}
