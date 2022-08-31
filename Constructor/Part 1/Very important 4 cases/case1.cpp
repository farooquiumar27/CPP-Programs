//this code won't compile .
#include<iostream>
using namespace std;
class Bulb
{
int w;
public:
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
Bulb t(60);//This line won't compile

return 0;
}