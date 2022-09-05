#include<iostream>
using namespace std;
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
friend class Calculator;
};
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
friend class Calculator;
};
class Calculator
{
public:
int getTotalCost(TV &t,Fridge &f)
{
int p1,p2;
p1=t.price;
p2=f.price;
return p1+p2;
}
int getDifference(TV &t,Fridge &f)
{
int p1,p2;
p1=t.price;
p2=f.price;
return p1-p2;
}
};
int main( )
{
TV product1;
Fridge product2;
Calculator c;
product1.setPrice(50000);
product2.setPrice(27000);
int total=c.getTotalCost(product1,product2);
int diff=c.getDifference(product1,product2);
cout<<"Total is "<<total<<endl;
cout<<"Difference is "<<diff<<endl;
return 0;
}