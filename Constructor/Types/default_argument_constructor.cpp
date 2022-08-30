#include<iostream>
using namespace std;
class Bulb
{
private:
int w;
public:
Bulb(int e=0)
{
w=e;
}
void setWattage(int e)
{
if(e>0)w=e;
else w=0;
}
int getWattage( )
{
return w;
}
};
int main()
{
Bulb b;
cout<<"Wattage is "<<b.getWattage( )<<endl;
b.setWattage(60);
cout<<"Wattage is "<<b.getWattage( )<<endl;
Bulb k(100);
cout<<"Wattage is "<<k.getWattage( )<<endl;
return 0;
}