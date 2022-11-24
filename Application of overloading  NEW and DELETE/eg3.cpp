#include<iostream>
using namespace std;

class Bulb
{
private:
int wattage;
Bulb(int wattage)
{
this->wattage=wattage;
}

public:
int getWattage( )
{
return this->wattage;
}
friend class BulbFactory;
};

class BulbFactory
{
public:
Bulb* getBulb(int wattage)
{
Bulb *b;
if(wattage<0 || wattage>240)return NULL;
b=new Bulb(wattage);
return b;
}
};

int main( )
{
Bulb *g;
BulbFactory f;
g=f.getBulb(240);
if(g)cout<<g->getWattage( )<<endl;
Bulb *a;
BulbFactory b;
a=b.getBulb(240);
if(a)cout<<a->getWattage( )<<endl;
cout<<g<<"-----"<<a<<endl;
return 0;
}