#include<iostream>
#include<fstream>
using namespace std;
class Bulb
{
public:
int price;
int wattage;
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

fstream f("info.data",ios::out | ios::in | ios::app | ios::binary);

cout<<"Put pointer is at location "<<f.tellp( )<<endl;
cout<<"Get pointer is at location "<<f.tellg( )<<endl;

f.write((char *)&b1,sizeof(Bulb));
cout<<"Put pointer is at location "<<f.tellp( )<<endl;
cout<<"Get pointer is at location "<<f.tellg( )<<endl;

f.write((char *)&b2,sizeof(Bulb));
cout<<"Put pointer is at location "<<f.tellp( )<<endl;
cout<<"Get pointer is at location "<<f.tellg( )<<endl;

f.write((char *)&b3,sizeof(Bulb));
cout<<"Put pointer is at location "<<f.tellp( )<<endl;
cout<<"Get pointer is at location "<<f.tellg( )<<endl;

f.write((char *)&b4,sizeof(Bulb));
cout<<"Put pointer is at location "<<f.tellp( )<<endl;
cout<<"Get pointer is at location "<<f.tellg( )<<endl;

f.seekp(8,ios::beg);
cout<<"Put pointer is at location "<<f.tellp( )<<endl;
cout<<"Get pointer is at location "<<f.tellg( )<<endl;

Bulb g;
f.read((char *)&g,sizeof(Bulb));
cout<<g.wattage<<" , "<<g.price<<endl;

cout<<"After reading"<<endl;
cout<<"Put pointer is at location "<<f.tellp( )<<endl;
cout<<"Get pointer is at locaton "<<f.tellg( )<<endl;

f.seekp(8,ios::beg);
g.wattage=450;
g.price=1000;
f.write((char *)&g,sizeof(Bulb));
cout<<"Put pointer is at location "<<f.tellp( )<<endl;
cout<<"Get pointer is at location "<<f.tellg( )<<endl;
f.close( );
return 0;
}