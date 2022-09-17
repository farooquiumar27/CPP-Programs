#include<iostream>
using namespace std;
template<class type,class shape>
void add(type x,shape y)
{
type z;
z=x+y;
cout<<"Total is "<<z<<endl;
}
int main( )
{
add(10,20.2f);
add(50.3,33);
return 0;
}