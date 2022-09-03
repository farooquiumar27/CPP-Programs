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
int main( )
{
aaa *a;
a=new aaa[5];
cout<<"Good"<<endl;
delete [ ] a;
return 0;
}