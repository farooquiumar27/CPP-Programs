#include<iostream>
#include<utility>
#include<map>
using namespace std;
int main( )
{
map<int,int> m;
m[101]=4030;
m[102]=30;
m[103]=650;
m[104]=923;
for(map<int,int>::iterator i=m.begin( );i!=m.end( );++i)
{
cout<<(*i).first<<","<<i->second<<endl;
}
return 0;
}