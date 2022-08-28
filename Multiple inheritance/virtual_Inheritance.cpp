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
class ccc:virtual public aaa
{

};
class ddd:public ccc,public bbb
{

};
int main( )
{
ddd d;
d.sam( );
return 0;
}