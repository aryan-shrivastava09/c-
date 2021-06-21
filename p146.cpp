#include<iostream>
#include<string>
using namespace std;

class Employee
{
protected:
    int id;
    string name;
public:
    Employee(int id = 0, string name = "Aryan")
    {
        this -> id = id;
        this -> name = name;
    }
    int getid()
    {
        return id;
    }
    string getname()
    {
        return name;
    }
    void setid(int i)
    {
        id = i;
    }
    void setname(string n)
    {
        name = n;
    }
    friend ostream & operator<<(ostream &o, Employee &e);
};

ostream & operator<<(ostream &o, Employee &e)
{
    cout<<e.name<<" "<<e.id;
    return o;
}

class Fulltime:public Employee
{
protected:
    int salary;
public:
    Fulltime(int i=0, string n="Aryan", int s=0):Employee(i, n)
    {
        salary = s;
    }
    int getsalary()
    {
        return salary;
    }
    void setsalary(int s)
    {
        salary = s;
    }
    friend ostream & operator<<(ostream &o, Fulltime &f);
};

ostream & operator<<(ostream &o, Fulltime &f)
{
    cout<<f.name<<" "<<f.id<<" "<<f.salary;
    return o;
}

class dailywage:public Employee
{
protected:
    int wage;
public:
    dailywage(int i, string n, int w):Employee(i,n)
    {
        wage = w;
    }
    int getwage()
    {
        return wage;
    }
    void setwage(int w)
    {
        wage = w;
    }
    friend ostream & operator<<(ostream &o, dailywage &d);
};

ostream & operator<<(ostream &o, dailywage &d)
{
    cout<<d.name<<" "<<d.id<<" "<<d.wage;
    return o;
}

int main()
{
    Fulltime f(9, "Aryan", 50000);
    cout<<f<<endl;
    dailywage d(9, "Aryan", 1000);
    cout<<d;
}
