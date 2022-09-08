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
void operator++(int) //postfix
{
this->price=this->price+10;
}
void operator++( ) //prefix
{
this->price=this->price+20;
}
void operator+=(int e)
{
this->price=this->price+e;
}
};
int main( )
{
Toy t1,t2;
t1.setPrice(100);
t1+=300;
t2.setPrice(200);
t1++;
++t2;
cout<<"Price of t1 is "<<t1.getPrice( )<<endl;
cout<<"Price of t2 is "<<t2.getPrice( )<<endl;
return 0;
}