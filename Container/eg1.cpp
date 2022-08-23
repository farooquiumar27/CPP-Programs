#include<iostream>
#include<string.h>
using namespace std;

class SDCard
{
private:
int capacity;
public:
void setCapacity(int e)
{
if(e>0) capacity=e;
else  capacity=0;
}
int getCapacity( )
{
return capacity;
}
};
class MobilePhone
{
private:
char brandName[36];
SDCard sdcard;
int price;
public:
void setBrandName(const char *p)
{
if(strlen(p)<36) strcpy(brandName,p);
else brandName[0]='\0';
}
void getBrandName(char *p)
{
strcpy(p,brandName);
}
void setPrice(int p)
{
if(p>0) price=p;
else price=0;
}
int getPrice( )
{
return price;
}
void setSDCard(SDCard e)
{
sdcard=e;
}
SDCard getSDCard( )
{
return sdcard;
}
};

int main( )
{
MobilePhone m;
m.setBrandName("Apple");
m.setPrice(100000);
SDCard ss;
ss.setCapacity(512);
m.setSDCard(ss);
char name[36];
int pp;
SDCard sd;
pp=m.getPrice( );
m.getBrandName(name);
sd=m.getSDCard( );
cout<<"MobilePhone Details....."<<endl;
cout<<"Brand Name - "<<name<<endl;
cout<<"Storage - "<<sd.getCapacity( )<<endl;
cout<<"Price - "<<pp<<endl;
return 0;
}