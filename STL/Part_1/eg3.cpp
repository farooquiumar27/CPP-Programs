#include<forward_list>
#include<iostream>
using namespace std;

int main( )
{
forward_list<int> list;
forward_list<int>::iterator i=list.before_begin( );

list.push_front(10);
list.push_front(13);
list.push_front(15);
list.push_front(20);
list.push_front(23);

list.pop_front( );

forward_list<int>::iterator g=list.begin( );
while(g!=list.end())
{
cout<<*g<<endl;
++g;
}
return 0;
}