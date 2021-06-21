#include<iostream>
using namespace std;

class Rectangle
{
    public:
    int length;
    int breadth;

    int getLength()
    {
        return length;
    }
    int getBeadth()
    {
        return breadth;
    }
    int setLength(int l)
    {
        length = l;
    }
    int setbreadth(int b)
    {
        breadth = b;
    }
    void display();
};

void Rectangle::display()
{
    cout<<length<<" x "<<breadth<<endl;
}

class cuboid:public Rectangle
{
    public:
    int height;

    int getHeight()
    {
        return height;
    }
    int setHeight(int h)
    {
        height = h;
    }
    void show();
};

void cuboid::show()
{
    cout<<length<<" x "<<breadth<<" x "<<height<<endl;
}

int main()
{
    Rectangle r;
    r.setLength(10);
    r.setbreadth(5);
    r.display();
    cuboid c;
    c.setLength(10);
    c.setbreadth(5);
    c.setHeight(10);
    c.show();
}
