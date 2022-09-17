#include<iostream>
using namespace std;
template<class type>
void add(type x,type y)
{
type z;
z=x+y;
cout<<"Total is "<<z<<endl;
}
int main( )
{
add(10,20);
add(5.3f,33.8f);
return 0;
}