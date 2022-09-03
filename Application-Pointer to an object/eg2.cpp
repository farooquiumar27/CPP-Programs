/*This code will compile but in this we have
to manage more than one pointer for same 
catagory of classes. 
*/
#include<iostream>
using namespace std;
class Maruti800
{
public:
void manual( )
{
cout<<"Operational details on Maruti800"<<endl;
}
};
class HondaCity
{
public:
void manual( )
{
cout<<"Operational details on Honda City"<<endl;
}
};
int main( )
{
HondaCity *h;
Maruti800 *m;
int ch;
cout<<"1->Maruti 800"<<endl;
cout<<"2->Honda City"<<endl;
cout<<"Enter your choice: ";
cin>>ch;
if(ch==1||ch==2)
{
if(ch==1)
{
m=new Maruti800;
m->manual( );
}
else
{
h=new HondaCity;
h->manual( );
}
}
else
{
cout<<"Invalid choice"<<endl;
}
return 0;
}