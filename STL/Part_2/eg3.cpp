#include<iostream>
#include<forward_list>
using namespace std;

int myfunc(int a,int b)
{
return a>b;
}

int main( )
{
forward_list<int> list;
forward_list<int>::iterator i;
i=list.before_begin( );
i=list.insert_after(i,10);
i=list.insert_after(i,20);
i=list.insert_after(i,100);
i=list.insert_after(i,-20);
i=list.insert_after(i,310);
i=list.insert_after(i,44);
list.sort(myfunc);
for(i=list.begin( );i!=list.end( );++i)cout<<*i<<endl;
return 0;
}