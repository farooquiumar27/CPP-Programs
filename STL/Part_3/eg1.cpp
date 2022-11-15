#include<iostream>
#include<list>
using namespace std;
int main( )
{
list<int> l1;
l1.push_back(10);
l1.push_back(20);
l1.push_back(30);
l1.push_back(40);
for(list<int>::iterator z=l1.begin( );z!=l1.end( );++z)cout<<*z<<endl;
cout<<"**************"<<endl;
for(list<int>::reverse_iterator z=l1.rbegin( );z!=l1.rend( );++z)cout<<*z<<endl;
return 0;
}
