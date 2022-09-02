#include<iostream>
using namespace std;
class aaa
{
public:
void sam( )
{

}
};
class bbb:public aaa
{
public:
void tom( )
{

}
};
int main( )
{
aaa *p1;//1
p1=new aaa;//2
p1->sam( );//3
p1->tom( );//4//This line will not compile

bbb *p2;//5
p2=new bbb;//6
p2->sam( );//7
p2->tom( );//8

aaa *p3;//9
p3=new bbb;//10
p3->sam( );//11
p3->tom( );//12//This line will also not compile

bbb *p4;//13
p4=new aaa;//14//This line will also not compile

return 0;
}