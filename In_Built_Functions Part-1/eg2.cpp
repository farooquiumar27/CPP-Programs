#include<iostream>
using namespace std;

int main( )
{
string a;
a="James_Bond";
string::reverse_iterator ri=a.rbegin( );
for( ;ri!=a.rend( );++ri)cout<<*ri<<endl;
return 0;
}