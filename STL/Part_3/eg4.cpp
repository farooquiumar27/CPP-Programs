#include<vector>
#include<iostream>
using namespace std;
int main( )
{
vector<int> v;
v.push_back(10);
v.push_back(20);
v.push_back(30);
v.push_back(40);

for(int e=0;e<v.size( );e++)cout<<v[e]<<endl;
cout<<"*******************"<<endl;
cout<<v.front()<<endl;
cout<<v.back( )<<endl;
cout<<"*******************"<<endl;
for(vector<int>::reverse_iterator i=v.rbegin( );i<v.rend( );++i)cout<<*i<<endl;

return 0;
}