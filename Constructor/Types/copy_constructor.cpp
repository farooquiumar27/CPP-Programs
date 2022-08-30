#include<iostream>
using namespace std;
class Bulb
{
private:
int w;
public:
Bulb( )
{
}
Bulb(const Bulb &v)
{
w=v.w;
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
b.setWattage(60);
cout<<"Wattage is "<<b.getWattage( )<<endl;
Bulb k(b);
cout<<"Wattage is "<<k.getWattage( )<<endl;
return 0;
}