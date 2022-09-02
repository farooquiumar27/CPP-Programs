//This code will not compile.
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
tom( );
}
};
int main( )
{
Name n;
n.sam( );
return 0;
}