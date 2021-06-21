#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class Item
{
public:
    string name;
    float price;
    int quantity;
    friend ofstream & operator<<(ofstream &ofs, Item &i);
    friend ifstream & operator>>(ofstream &ofs, Item &i);
};

ofstream & operator<<(ofstream &ofs, Item &i)
{
    ofs<<i.name<<endl;
    ofs<<i.price<<endl;
    ofs<<i.quantity;
    return ofs;
}

ifstream & operator>>(ifstream &ifs, Item &i)
{
    ifs>>i.name>>i.price>>
    .quantity;
    return ifs;
}

int main()
{
    Item i1, i2;
    i1.name = "Juice";
    i1.price = 80.6;
    i1.quantity = 5;
    ofstream ofs("Item.txt");
    ofs<<i1;
    ofs.close();
    ifstream ifs("item.txt");
    ifs>>i2;
    cout<<"Name: "<<i2.name<<endl;
    cout<<"Price: "<<i2.price<<endl;
    cout<<"Quantity: "<<i2.quantity<<endl;
    if(ifs.eof())
        cout<<"End of file reached";
    ifs.close();
}
