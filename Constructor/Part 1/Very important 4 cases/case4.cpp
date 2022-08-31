//this code wont't compile
#include<iostream>
using namespace std;
class Bulb
{
int w;
public:
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
Bulb g;//this line will not compile
Bulb t(60);
return 0;
}