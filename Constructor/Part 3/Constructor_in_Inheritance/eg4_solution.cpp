//this code will compile.
#include<iostream>
using namespace std;
class aaa
{
public:
aaa(int e)
{
cout<<"Base class parameterized constructor."<<endl;
}
};
class bbb:public aaa
{
public:
bbb( ):aaa(10)
{
cout<<"Derived class default constructor."<<endl;
}
};
int main( )
{
bbb b;
return 0;
}