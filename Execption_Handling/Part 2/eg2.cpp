#include<iostream>
using namespace std;
void sam(int e) throw(int,const char*)
{
if(e==5)
{
throw e;
}
if(e==7)
{
throw "Great";
}
cout<<"Processing something"<<endl;
}
void doSomething( )
{
cout<<"Something happend , which was not expected"<<endl;
}

int main( )
{
set_unexpected(doSomething);
sam(100);
sam(5);
sam(30);
sam(7);
return 0;
}