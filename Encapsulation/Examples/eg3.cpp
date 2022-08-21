#include<iostream>
using namespace std;
class Bulb
{
private:
int w;
public:
void setWattage(int p)
{
if(p<1||p>240)
{
cout<<"Invalid input for wattage."<<endl;
}
else
{
w=p;
}
}
int getWattage( )
{
return w;
}
};

int main( )
{
Bulb b;
b.setWattage(60);
cout<<"The vale of wattage is "<<b.getWattage( )<<endl;
return 0;
}