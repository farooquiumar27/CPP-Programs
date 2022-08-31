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
Bulb(int e)
{
w=e;
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
Bulb b,t(60);
cout<<"Wattage is "<<b.getWattage()<<endl;
cout<<"Wattage is "<<t.getWattage()<<endl;
return 0;
}