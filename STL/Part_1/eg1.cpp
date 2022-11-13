#include<forward_list>
#include<iostream>
using namespace std;

int main( )
{
forward_list<int> list={10,13,15,20,23};
forward_list<int>::iterator i=list.begin( );
while(i!=list.end())
{
cout<<*i<<endl;
++i;
}
return 0;
}