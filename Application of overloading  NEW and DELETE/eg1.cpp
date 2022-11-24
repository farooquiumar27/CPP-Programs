#include<iostream>
using namespace std;

class Bulb
{
private:
int wattage;
Bulb(int wattage)
{
this->wattage=wattage;
}
};
int main( )
{
Bulb g(50);
return 0;
}