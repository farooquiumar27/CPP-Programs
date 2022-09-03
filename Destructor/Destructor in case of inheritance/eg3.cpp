#include<iostream>
using namespace std;
class aaa
{
public:
aaa( )
{
cout<<"Base class default constructor"<<endl;
}
~aaa( )
{
cout<<"Base class destructor"<<endl;
}
};
class bbb:public aaa
{
public:
bbb( )
{
cout<<"Derived class default constructor"<<endl;
}
~bbb( )
{
cout<<"Derived class destructor"<<endl;
}
};
int main( )
{
aaa *a;
a=new bbb;
cout<<"Cool"<<endl;
delete a;
return 0;
}