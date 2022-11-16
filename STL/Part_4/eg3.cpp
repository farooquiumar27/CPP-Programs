#include<iostream>
#include<utility>
#include<map>
using namespace std;
int main( )
{
map<int,int> m;
m.insert(pair<int,int>(101,4030));
m.insert(pair<int,int>(102,30));
m.insert(pair<int,int>(103,650));
m.insert(pair<int,int>(104,923));
for(map<int,int>::iterator i=m.begin( );i!=m.end( );++i)
{
cout<<(*i).first<<","<<i->second<<endl;
}
return 0;
}