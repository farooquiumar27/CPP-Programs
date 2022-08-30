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
void setWattage(int e)
{
if(e>0)w=e;
else w=0;
}
int getWattage()
{
return 0;
}
};
int main( )
{
Bulb b;
b.setWattage(60);
cout<<"Wattage is "<<b.getWattage( )<<endl;
return 0;
}