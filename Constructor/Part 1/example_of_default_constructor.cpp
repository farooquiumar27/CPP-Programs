#include<iostream>
using namespace std;
class Bulb
{
private:
int w;
public:
Bulb( )
{
w=0;
}
setWattage(int e)
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
Bulb b,t;
cout<<"Wattage is "<<b.getWattage()<<endl;
cout<<"Wattage is "<<t.getWattage()<<endl;
return 0;
}