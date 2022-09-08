#include<iostream>
using namespace std;
class Toy
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
int  operator++(int) //postfix
{
this->price=this->price+10;
return this->price-10;
}
int  operator++( ) //prefix
{
this->price=this->price+20;
return this->price;
}
};
int main( )
{
Toy t1,t2;
int a,b;
t1.setPrice(100);
t2.setPrice(200);
a=t1++;
b=++t2;
cout<<"Value of a is "<<a<<endl;
cout<<"Value of b is "<<b<<endl;
cout<<"Price of t1 is "<<t1.getPrice( )<<endl;
cout<<"Price of t2 is "<<t2.getPrice( )<<endl;
return 0;
}