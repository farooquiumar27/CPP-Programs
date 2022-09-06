//this code will compile.
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
Bulb(int e)
{
cout<<"Parameterized constructor"<<endl;
this->w=e;
}
};
int main( )
{
Bulb g=60;
return 0;
}