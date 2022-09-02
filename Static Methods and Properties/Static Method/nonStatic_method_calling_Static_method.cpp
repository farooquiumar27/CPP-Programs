#include<iostream>
using namespace std;
class Name
{
public:
void tom( )
{
cout<<"Great"<<endl;
sam( );
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
return 0;
}