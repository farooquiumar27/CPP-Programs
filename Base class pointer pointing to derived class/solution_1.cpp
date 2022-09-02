#include<iostream>
using namespace std;
class aaa
{
public:
void sam( )
{
cout<<"Great"<<endl;
}
virtual void tom( )
{

}
};
class bbb:public aaa
{
public:
void tom( )
{
cout<<"Cool"<<endl;
}
};
int main( )
{
aaa *a;
a=new bbb;
a->sam( );
a->tom( );
return 0;
}