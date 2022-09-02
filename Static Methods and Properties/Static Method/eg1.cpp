#include<iostream>
using namespace std;
class Name
{
public:
void tom( )
{
cout<<"Great"<<endl;
}
static void sam( )
{
cout<<"Cool"<<endl;
}
};
int main( )
{
Name n;
n.tom( );
n.sam( );
return 0;
}