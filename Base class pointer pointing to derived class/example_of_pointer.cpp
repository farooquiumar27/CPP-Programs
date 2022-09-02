#include<iostream>
using namespace std;
class Bulb
{
private:
int w;
public:
void setWattage(int e)
{
w=e;
}
int getWattage( )
{
return w;
}
};
int main( )
{
Bulb *g;
g=new Bulb;
g->setWattage(60);
cout<<"Wattage is "<<g->getWattage( )<<endl;
return 0;
}