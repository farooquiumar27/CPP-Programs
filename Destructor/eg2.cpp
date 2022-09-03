#include<iostream>
using namespace std;
class aaa
{
public:
aaa( )
{
cout<<"Default constructor"<<endl;
}
~aaa( )
{
cout<<"Destructor"<<endl;
}
};
void lmn( )
{
aaa p,q,r;
}
int main( )
{
aaa a,b;
cout<<"Great"<<endl;
lmn( );
cout<<"Cool"<<endl;
return 0;
}