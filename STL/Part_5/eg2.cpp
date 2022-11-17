#include<iostream>
#include<utility>
#include<map>
using namespace std;
int main( )
{
multimap<int,int> m;
m.insert(pair<int,int>(101,4030));
m.insert(pair<int,int>(101,30));
m.insert(pair<int,int>(101,420));
m.insert(pair<int,int>(102,6364));
m.insert(pair<int,int>(102,1000));
m.insert(pair<int,int>(103,980));
m.insert(pair<int,int>(103,12345));
m.insert(pair<int,int>(103,9876));
multimap<int,int>::iterator i;
i=m.begin( );
while(i!=m.end( ))
{
cout<<i->first<<","<<i->second<<endl;
++i;
}
return 0;
}