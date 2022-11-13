#include<forward_list>
#include<iostream>
using namespace std;

int main( )
{
forward_list<int> list;
forward_list<int>::iterator i=list.before_begin( );

i=list.insert_after(i,10);
i=list.insert_after(i,13);
i=list.insert_after(i,15);
i=list.insert_after(i,20);
i=list.insert_after(i,23);
cout<<list.front( )<<endl;
return 0;
}