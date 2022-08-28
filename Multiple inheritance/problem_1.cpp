//This code won't compile.
#include<iostream>
using namespace std;
class aaa
{
public:
void sam( )
{
cout<<"Great"<<endl;
}
};
class bbb:public aaa
{

};
class ccc:public aaa
{

};
class ddd:public ccc,public bbb
{

};
int main( )
{
ddd d;
d.sam();//this call is ambigious
return 0;
}