#include<iostream>
#include<string>
using namespace std;

class Student
{
private:
    int r;
    string name;
    int m1,m2,m3;
public:
    Student(int r, int m1, int m2, int m3, string name);
    int getroll();
    int getm1();
    int getm2();
    int getm3();
    string getname();
    int setroll(int r);
    int setm1(int m1);
    int setm2(int m2);
    int setm3(int m3);
    string setname(string name);
    int totalmarks();
    char grade();
    ~Student();
};

Student::Student(int r, int m1, int m2, int m3, string name)
{
    this -> r = r;
    this -> m1 = m1;
    this -> m2 = m2;
    this -> m3 = m3;
    this -> name = name;
}

int Student::getroll()
{
    return r;
}

int Student::getm1()
{
    return m1;
}

int Student::getm2()
{
    return m2;
}

int Student::getm3()
{
    return m3;
}

string Student::getname()
{
    return name;
}

int Student::setroll(int r)
{
    this->r=r;
}

int Student::setm1(int m1)
{
    this->m1=m1;
}

int Student::setm2(int m2)
{
    this->m2=m2;
}

int Student::setm3(int m3)
{
    this->m3=m3;
}

string Student::setname(string name)
{
    this->name=name;
}

int Student::totalmarks()
{
    return m1+m2+m3;
}

char Student::grade()
{
    int tm = totalmarks();
    if(tm <= 300 && tm>=250)
        return 'A';
    else if(tm>=200 && tm<250)
        return 'B';
    else if(tm>=150 && tm<200)
        return 'C';
    else
        return 'F';
}

Student::~Student()
{
    cout<<"Done"<<endl;
}

int main()
{
    Student s(8,90,80,70,"Aryan");
    cout<<s.getroll()<<endl;
    cout<<s.getm1()<<endl;
    cout<<s.getm2()<<endl;
    cout<<s.getm3()<<endl;
    cout<<s.getname()<<endl;
    s.setroll(9);
    cout<<s.getroll()<<endl;
    cout<<s.totalmarks()<<endl;
    cout<<s.grade()<<endl;
}
