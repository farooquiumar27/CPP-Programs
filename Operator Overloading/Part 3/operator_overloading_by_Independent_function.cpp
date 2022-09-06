#include<stdio.h>
class Fridge
{
private:
int price;
public:
void setPrice(int price)
{
this->price=price;
}
int getPrice( )
{
return this->price;
}
};
class TV
{
private:
int price;
public:
void setPrice(int price)
{
this->price=price;
}
int getPrice( )
{
return this->price;
}
};
int operator<(TV &t,Fridge &f)
{
return t.getPrice( ) < f.getPrice( );
}
int operator>(TV &t,Fridge &f)
{
return t.getPrice( ) > f.getPrice( );
}
int operator==(TV &t,Fridge &f)
{
return t.getPrice( )== f.getPrice( );
}
int main( )
{
TV t;
Fridge g;
t.setPrice(25000);
g.setPrice(65000);
if(t<g)
{
printf("Price of TV is less than that of Fridge.\n");
}
if(t>g)
{
printf("Price of TV is more than that of Fridge.\n");
}
if(t==g)
{
printf("Price of TV and Fridge is same.\n");
}
return 0;
}