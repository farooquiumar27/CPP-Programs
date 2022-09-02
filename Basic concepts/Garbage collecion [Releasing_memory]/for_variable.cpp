#include<iostream>
using namespace std;
int main( )
{
int *p;
p=new int;
*p=50;
cout<<*p<<endl;
delete p;//for releasing memory
return 0;
}