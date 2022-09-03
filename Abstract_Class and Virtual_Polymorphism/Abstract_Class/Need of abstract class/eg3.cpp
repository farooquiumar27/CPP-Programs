//this code will compile.
#include<iostream>
using namespace std;
//this 2 class has been created  by Player_1
class Car
{
public:
virtual void manual( )=0;
};
class ServiceStation
{
public:
void doService(Car *c)
{
c->manual( );
}
};
//Now the following code has been written Player_2
class HondaCity:public Car
{
public:
void manual( )
{

}
};
int main( )
{
HondaCity h;
ServiceStation ss;
ss.doService(&h);
return 0;
}