/*this code will compile 
but it has one negative point that user only
 need one object and memory is allocated for both object
*/

#include<iostream>
using namespace std;
class Maruti800
{
public:
void manual( )
{
cout<<"Operational details of Maruti 800"<<endl;
}
};
class HondaCity
{
public:
void manual( )
{
cout<<"Operational details of Honda City"<<endl;
}
};
int main( )
{
HondaCity h;
Maruti800 m;
int ch;
cout<<"1->Maruti 800"<<endl;
cout<<"2->Honda City"<<endl;
cout<<"Enter your choice: ";
cin>>ch;
if(ch==1)
{
m.manual( );
}
else
{
if(ch==2)
{
h.manual( );
}
else
{
cout<<"Invalid choice"<<endl;
}
}
return 0;
}