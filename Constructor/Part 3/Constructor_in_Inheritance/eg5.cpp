//this code will compile
#include<iostream>
using namespace std;
class aaa
{
public:
aaa( )
{
cout<<"Base class default constructor"<<endl;
}
};
class bbb:public aaa
{
public:
bbb( )
{
cout<<"Derived class default constructor"<<endl;
}
bbb(const bbb &v)
{
cout<<"Derived class copy constructor"<<endl;
}
};
int main( )
{
bbb b;
bbb c(b);
return 0;
}