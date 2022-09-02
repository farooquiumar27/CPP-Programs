//this code will not compile
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
g->ramu( );//this line will not compile
cout<<"Wattage is "<<g->getWattage( )<<endl;
return 0;
}