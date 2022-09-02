#include<iostream>
using namespace std;
class Bulb
{
private:
int w; //wattage
static int p; //price
public:
void setWattage(int e)
{
w=e;
}
void setPrice(int e)
{
p=e;
}
int getWattage( )
{
return w;
}
int getPrice( )
{
return p;
}
};
int Bulb::p; 
int main( )
{
Bulb g ,a;
g.setWattage(60);
cout<<"Wattage is "<<g.getWattage( )<<endl;
g.setPrice(100);
cout<<"Price is "<<a.getPrice( )<<endl;
return 0;
}