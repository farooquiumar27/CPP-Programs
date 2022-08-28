#include<iostream>
using namespace std;

class aaa
{
public:
void sam( )
{
cout<<"Its time to play the GAME!!!"<<endl;
}
};
class bbb:virtual public aaa
{

};
class sss:virtual public aaa
{

};
class ccc:public aaa
{

};
class ddd:public ccc,public bbb,public sss
{

};
int main( )
{
ddd d;
d.sam( );
return 0;
}