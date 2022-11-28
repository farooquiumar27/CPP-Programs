#include<iostream>
using namespace std;
class aaa
{
private:
int x;
public:
void sam( )
{
x=10;
}
void tom( ) const
{
x=20;
}
};
int main( )
{
aaa a;
a.sam( );
a.tom( );
return 0;
}