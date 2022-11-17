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
pair<multimap<int,int>::iterator,multimap<int,int>::iterator> r;

r=m.equal_range(103);
multimap<int,int>::iterator i;
//cout<<r.first==m.end;
i=r.first;
while(i!=r.second)
{
cout<<i->first<<","<<i->second<<endl;
++i;
}
return 0;
}