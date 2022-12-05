#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

class Bulb
{
public:
int price;
int wattage;
string brand;
};

class BulbManager
{
class _Bulb
{
public:
int wattage;
int price;
char brand[51];
};
public:
void add(Bulb &b)
{
_Bulb bulb;
bulb.wattage=b.wattage;
bulb.price=b.price;
strcpy(bulb.brand,b.brand.c_str( ));
ofstream f("info.data",ios::app | ios::binary);
f.write((char *)&bulb,sizeof(_Bulb));
f.close( );
}
void displayList( )
{
Bulb b;
_Bulb bulb;
ifstream f("info.data",ios::binary);
if(f.fail())
{
cout<<"No bulb added"<<endl;
return;
}
while(1)
{
f.read((char *)&bulb,sizeof(_Bulb));
if(f.fail())break;
b.wattage=bulb.wattage;
b.price=bulb.price;
b.brand=string(bulb.brand);
cout<<"Wattage: "<<b.wattage<<" ,Price: "<<b.price<<" ,Brand_Name: "<<b.brand<<endl;
}
f.close( );
}
};

int main( )
{
int wattage,price,ch;
string brand;
Bulb b;
BulbManager bm;
while(1)
{
cout<<"1->Add Bulb"<<endl;
cout<<"2->Display list of Bulb"<<endl;
cout<<"3->Exit"<<endl;
cout<<"Enter your choice : ";
cin>>ch;
if(ch==1)
{
cout<<"Enter wattage: ";
cin>>wattage;
cout<<"Enter price: ";
cin>>price;
cout<<"Enter brand name: ";
cin>>brand;
b.wattage=wattage;
b.price=price;
b.brand=brand;
bm.add(b);
cout<<"Bulb added"<<endl;
}
else if(ch==2)
{
bm.displayList( );
}
else if(ch==3)break;
else cout<<"Invalid choice"<<endl;
}

return 0;
}