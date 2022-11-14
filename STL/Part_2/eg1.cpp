#include<iostream>
using namespace std;

class aaa
{
public:
void operator( )( )
{
cout<<"Cool"<<endl;
}
int operator( )(int x,int y)
{
cout<<"Great"<<endl;
return x+y;
}
};
int main( )
{
aaa a;
a( );
cout<<a(2,3)<<endl;
return 0;
}