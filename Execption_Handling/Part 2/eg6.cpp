#include<iostream>
using namespace std;

class DAO_Exception : public exception
{
private:
string message;
public:
DAO_Exception(string message)
{
this->message=message;
}
DAO_Exception(const DAO_Exception &other)
{
this->message=other.message;
}
DAO_Exception & operator=(const DAO_Exception &other)
{
this->message=other.message;
return *this;
}
virtual ~DAO_Exception( ) throw( )
{

}
const char* what( ) throw( )
{
return this->message.c_str( );
}
};
int main( )
{
DAO_Exception d(string("some problem"));
int x;
cout<<"Enter data: ";
cin>>x;
try
{
if(x==5)throw d;
}catch(DAO_Exception &e)
{
cout<<"DAO_Exception got raised"<<endl;
cout<<e.what( )<<endl;
}
return 0;
}