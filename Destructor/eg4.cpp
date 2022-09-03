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
a=new aaa;
cout<<"Good"<<endl;
aaa k;
cout<<"Cool"<<endl;
delete a;
cout<<"Ujjain"<<endl;
return 0;
}