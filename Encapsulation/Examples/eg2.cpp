//this code will compile but is not totally correct.
//the upgraged version will be eg3. 

#include<iostream>
using namespace std;

class Bulb
{
private:
int w;
public:
void setWattage(int p)
{
w=p;
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
cout<<"The value of wattage is "<<b.getWattage( )<<endl;
return 0;
}
