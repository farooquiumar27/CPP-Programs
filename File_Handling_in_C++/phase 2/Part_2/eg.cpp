#include<iostream>
#include<fstream>
#include<string>
using namespace std;

class Bulb
{
public:
int price;
int wattage;
string brand;
};

int main( )
{
Bulb b1,b2,b3,b4;
b1.wattage=0;
b2.wattage=40;
b3.wattage=60;
b4.wattage=100;

b1.price=10;
b2.price=15;
b3.price=20;
b4.price=30;

b1.brand="Geeks for geek";
b2.brand="Jack & Jons";
b3.brand="Pepe Jeans [London]";
b4.brand="OO7";

fstream f("info.data",ios::out | ios::in | ios::app | ios::binary);

f.write((char *)&b1,sizeof(Bulb));
cout<<f.tellp( )<<endl;

f.write((char *)&b2,sizeof(Bulb));
cout<<f.tellp( )<<endl;

f.write((char *)&b3,sizeof(Bulb));
cout<<f.tellp( )<<endl;

f.write((char *)&b4,sizeof(Bulb));
cout<<f.tellp( )<<endl;

f.seekg(0,ios::beg);

f.read((char *)&b1,sizeof(Bulb));
cout<<b1.wattage<<" , "<<b1.price<<" , "<<b1.brand<<endl;

f.close( );

return 0;
}