//this code will not compile.
#include<iostream>
using namespace std;
class Bulb
{
private:
int w;
public:
void setWattage(int e)
{
this->w=e;
}
int getWattage( )
{
return this->w;
}

};
int main( )
{
Bulb g=60;
return 0;
}