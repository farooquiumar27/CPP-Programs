#include<iostream>
using namespace std;
class Car
{
public:
virtual void manual( )
{

}
};
class Maruti800:public Car
{
public:
void manual( )
{
cout<<"Operational details of Maruti 800"<<endl;
}
};
class HondaCity:public Car
{
public:
void manual( )
{
cout<<"Operational details of Honda City"<<endl;
}
};
int main( )
{
Car *c;
int ch;
cout<<"1->Maruti 800"<<endl;
cout<<"2->Honda City"<<endl;
cout<<"Enter your choice: ";
cin>>ch;
if(ch==1||ch==2)
{
if(ch==1)
{
c=new Maruti800;
}
else
{
c=new HondaCity;
}
c->manual( );
}
else
{
cout<<"Invalid choice"<<endl;
}
return 0;
}