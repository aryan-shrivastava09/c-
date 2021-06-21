#include<iostream>
using namespace std;
 class Car
 {
 public:
    virtual void start() = 0;
    virtual void stop() = 0;
};

class Innova:public Car
{
public:
    void start()
    {
        cout<<"Innova Started"<<endl;
    }
    void stop()
    {
        cout<<"Innova Stopped"<<endl;
    }
};

class Swift:public Car
{
public:
    void start()
    {
        cout<<"Swift started"<<endl;
    }
    void stop()
    {

        cout<<"Swift stopped"<<endl;
    }
};

int main()
{
    Car *c;
    c = new Innova;
    c->start();
    c = new Swift;
    c->start();
}
