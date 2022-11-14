#include<iostream>
#include<forward_list>
using namespace std;

bool myfunc(string a,string b)
{
return a>b;
}

int main( )
{
forward_list<string> list;
forward_list<string>::iterator i;
i=list.before_begin( );
i=list.insert_after(i,string("Asif"));
i=list.insert_after(i,string("Babar"));
i=list.insert_after(i,string("Rizwan"));
i=list.insert_after(i,string("Haris"));
i=list.insert_after(i,string("Shadab"));
i=list.insert_after(i,string("Nawaz"));
list.sort(myfunc);
for(i=list.begin( );i!=list.end( );++i)cout<<*i<<endl;
return 0;
}