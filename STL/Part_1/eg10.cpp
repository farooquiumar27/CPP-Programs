#include<forward_list>
#include<iostream>
using namespace std;

int main( )
{
forward_list<int> list;
forward_list<int>::iterator i=list.before_begin( );

i=list.insert_after(i,10);
i=list.insert_after(i,10);
i=list.insert_after(i,10);
i=list.insert_after(i,13);
i=list.insert_after(i,15);
i=list.insert_after(i,15);
i=list.insert_after(i,20);
i=list.insert_after(i,10);
i=list.insert_after(i,23);

list.unique( );

forward_list<int>::iterator g=list.begin( );
while(g!=list.end())
{
cout<<*g<<endl;
++g;
}
return 0;
}