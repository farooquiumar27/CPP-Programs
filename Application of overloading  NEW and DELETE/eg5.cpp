#include<iostream>
#include<map>
#include<utility>
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

void operator delete(void *p)
{
//do nothing;
}
~Bulb( )
{
cout<<"Distructor got called for Bulb of wattage "<<this->wattage<<endl;
}
friend class BulbFactory;
};


class BulbFactory
{
private:
static map<int,Bulb*> m;
static int factoryCounter;
public:
Bulb* getBulb(int wattage)
{
Bulb *b;
if(wattage<0 || wattage>240)return NULL;
map<int,Bulb*>::iterator i;
i=m.find(wattage);
if(i!=m.end( ))
{
b=i->second;

}
else
{
b=new Bulb(wattage);
m.insert(pair<int,Bulb*>(wattage,b));
}
return b;
}
BulbFactory( )
{
factoryCounter++;
cout<<"Now the number of factories are "<<factoryCounter<<endl;
}

~BulbFactory( )
{
factoryCounter--;
cout<<"Now the number of factories are "<<factoryCounter<<endl;
if(factoryCounter==0)
{
cout<<"Releasing all bulbs as the factory counter becomes 0"<<endl;
map<int,Bulb*>::iterator i;
for(i=m.begin( );i!=m.end( );++i)delete(i->second);
}
}
};
map<int,Bulb*> BulbFactory::m;
int BulbFactory::factoryCounter=0;
int main( )
{
Bulb *g;
BulbFactory f1;
g=f1.getBulb(240);
if(g)cout<<g->getWattage( )<<endl;
Bulb *a;
BulbFactory f2;
a=f2.getBulb(240);
if(a)cout<<a->getWattage( )<<endl;
Bulb *b;
BulbFactory f3;
b=f3.getBulb(40);
if(b)cout<<b->getWattage( )<<endl;
cout<<g<<"-----"<<a<<"-----"<<b<<endl;
return 0;
}