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
operator int( )
{
return this->price;
}
};
int main( )
{
Toy t1;
t1.setPrice(100);
int x=50;
int z;
z=x+t1;
cout<<"Value of z is "<<z<<endl;
return 0;
}