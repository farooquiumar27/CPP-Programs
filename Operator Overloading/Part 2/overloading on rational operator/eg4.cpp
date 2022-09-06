#include<stdio.h>
class TV
{
private:
int price;
public:
void setPrice(int e)
{
this->price=e;
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
void setPrice(int e)
{
this->price=e;
}
int getPrice( )
{
return this->price;
}
};

class Monitor
{
public:
Monitor & operator<<(int x)
{
printf("%d",x);
}
Monitor & operator<<(const char *x)
{
printf("%s",x);
}
Monitor & operator<<(TV &v)
{
printf("%d",v.getPrice( ));
}
};
namespace house
{
Monitor mout;
}
using namespace house;

int main( )
{
TV t;
Fridge f;
t.setPrice(65000);
f.setPrice(45000);
mout<<"Price of TV is : "<<t;
return 0;
}