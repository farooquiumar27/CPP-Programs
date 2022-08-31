#include<iostream>
using namespace std;
class Bulb
{
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
Bulb g;
Bulb t(60);
return 0;
}