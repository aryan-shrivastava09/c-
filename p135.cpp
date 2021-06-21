#include<iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;
public:
    Rectangle()
    {
        length= 0;
        breadth = 0;
    }
    Rectangle(int l =0, int b = 0)
    {
        setLength(l);
        setBreadth(b);
    }
    Rectangle(Rectangle &r)
    {
        length = r.length;
        breadth = r.breadth;
    }
       int setLength(int l)
    {   if(l>=0)
            {length = l;}
        else
        {
            cout<<"Length can't be negative it has been set to 0\n";
            length =0;
        }
    }
    int setBreadth(int b)
    {
        if(b>=0)
            {breadth = b;}
        else
        {
            cout<<"Breadth can't be negative it has been set to 0\n";
            breadth =0;
        }
    }
    int getLength()
    {
        return length;
    }
    int getBreadth()
    {
        return breadth;
    }
    int area()
    {
        return length * breadth;
    }
    int perimeter()
    {
        return 2*(length + breadth);
    }
};

int main()
{
    Rectangle r(10,5);
    Rectangle r1(r);
    r.setLength(-10);
    r.setBreadth(-5);
    cout<<r.getLength()<<" "<<r.getBreadth()<<endl;
    r.setLength(10);
    r.setBreadth(5);
    cout<<r.getLength()<<" "<<r.getBreadth()<<endl;
    cout<<"Area "<<r.area();
    cout<<"Area "<<r1.area();
}
