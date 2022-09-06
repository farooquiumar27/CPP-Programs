//this code will not compile.
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
class aaa
{
public:
aaa( )
{

}
aaa(int e)
{

}
};
void doSomething(Bulb g)
{
cout<<"333"<<endl;
cout<<"Wattage is : "<<g.getWattage( )<<endl;
}
void doSomething(aaa a)
{

}
int main( )
{
doSomething(10);
return 0;
}