#include<iostream>
using namespace std;
class Bulb
{
private:
int w;
public:
Bulb(int e)
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
Bulb b(100);
cout<<"Wattage is "<<b.getWattage( )<<endl;
b.setWattage(60);
cout<<"Wattage is "<<b.getWattage( )<<endl;
return 0;
}