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
map<int,Bulb*> m;
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
~BulbFactory( )
{
map<int,Bulb*>::iterator i;
for(i=m.begin( );i!=m.end( );++i)delete(i->second);
}
};

int main( )
{
Bulb *g;
BulbFactory f;
g=f.getBulb(240);
if(g)cout<<g->getWattage( )<<endl;
Bulb *a;
a=f.getBulb(240);
if(a)cout<<a->getWattage( )<<endl;
Bulb *b;
b=f.getBulb(40);
if(b)cout<<b->getWattage( )<<endl;
cout<<g<<"-----"<<a<<"-----"<<b<<endl;
return 0;
}