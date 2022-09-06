#include<iostream>
using namespace std;
class Bulb
{
private:
int w;
public:
void setWattage(int e)
{
this->w=e;
}
int getWattage( )
{
return this->w;
}
Bulb( )
{
cout<<"Default constructor"<<endl;
}
Bulb(int e)
{
cout<<"Parameterized constructor"<<endl;
this->w=e;
}
Bulb(const Bulb &v)
{
cout<<"Copy constructor"<<endl;
this->w=v.w;
}
Bulb & operator=(const Bulb &v)
{
cout<<"operator = get invoked"<<endl;
this->w=v.w;
return *this;
}
};
ostream & operator<<(ostream &o,Bulb &b)
{
o<<b.getWattage( );
return o;
}
int main( )
{
Bulb g;
cout<<"111"<<endl;
g=100;
cout<<"222"<<endl;
Bulb m=60;
cout<<"333"<<endl;
Bulb k=m;
cout<<"444"<<endl;
Bulb u;
u=k;
cout<<"555"<<endl;
cout<<"Wattage is : "<<g<<endl;
}