#include<iostream>
using namespace std;
class Bulb
{
private:
int w;
public:
Bulb( )
{
w=100;
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
cout<<"Default wattage is "<<b.getWattage( )<<endl;
return 0;
}