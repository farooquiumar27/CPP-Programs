#include<stdio.h>
class Bulb
{
private:
int wattage;
int price;
public:
void setPrice(int p)
{
this->price=p;
}
int getPrice( )
{
return this->price;
}
void setWattage(int w)
{
this->wattage=w;
}
int getWattage( )
{
return this->wattage;
}
int operator<(Bulb &v)
{
return this->price<v.price;
}
};
int main( )
{
Bulb g,t;
g.setWattage(60);
g.setPrice(100);
t.setWattage(100);
t.setPrice(50);
if(g<t)
{
printf("Price of g is less than that of t.\n");
}
else
{
printf("Price of g is not less than that of t.\n");
}
return 0;
}