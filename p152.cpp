#include<iostream>
using namespace std;

class Shape
{
public:
    virtual double area() = 0;
    virtual double perimeter() = 0;
};
class Rectangle:public Shape
{
private:
    int length;
    int breadth;
public:
    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }
    double area()
    {
        return length * breadth;
    }
    double perimeter()
    {
        return 2*(length + breadth);
    }
};
class Circle:public Shape
{
private:
    int r;
public:
    Circle(int r)
    {
        this->r = r;
    }
    double area()
    {
        return 3.14*r*r;
    }
    double perimeter();
};

double Circle::perimeter()
{
    return 2*3.14*r;
}

int main()
{
    Shape *p;
    p = new Circle(5);
    cout<<p->area()<<endl;
}
