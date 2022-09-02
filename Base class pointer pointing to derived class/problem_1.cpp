//This line not compile
#include<iostream>
using namespace std;
class aaa
{
public;
void sam( )
{
cout<<"Great"<<endl;
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
a->tom( );//this line will not compile
return 0;
}