//This code will not compile because object does not contain space for static property.
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
int main( )
{
Bulb g;
g.setWattage(60);
cout<<"Wattage is "<<g.getWattage( )<<endl;
g.setPrice(100);
cout<<"Price is "<<g.getPrice( )<<endl;
return 0;
}