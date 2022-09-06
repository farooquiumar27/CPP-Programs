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
Bulb( )
{
cout<<"Default constructor"<<endl;
}
Bulb(int e)
{
cout<<"Parameterized constructor"<<endl;
this->w=e;
}
Bulb(const Bulb &v)
{
cout<<"Copy constructor"<<endl;
this->w=v.w;
}
};
int main( )
{
Bulb k;
k=60;
return 0;
}