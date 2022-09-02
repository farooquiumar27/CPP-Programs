#include<iostream>
using namespace std;
int main( )
{
int x;
cout<<(unsigned int)&x<<endl;
int *p;
p=&x;
cout<<(unsigned int)p<<endl;
p++;
cout<<(unsigned int)p<<endl;
p=p+10;
cout<<(unsigned int)p<<endl;
return 0;
}