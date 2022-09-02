//this code will compile
#include<iostream>
using namespace std;
class aaa
{
};
class bbb:public aaa
{
};
int main( )
{
aaa *a;
a=new bbb;
bbb*b;
//b=new aaa;
return 0;
}