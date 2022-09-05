//this code will not compile.
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
};
class Fridge
{
private:
int price;
public:
vsoid setPrice(int price)
{
this->price=price;
}
int getPrice( )
{
return this->price;
}
};
int getTotalCost(TV &t,Fridge &f)
{
int p1,p2;
p1=t.price;
p2=f.price;
return p1+p2;
}
int main( )
{
TV product1;
Fridge product2;
product1.setPrice(50000);
product2.setPrice(27000);
int total=getTotalCost(product1,product2);
cout<<"Total is "<<total<<endl;
return 0;
}