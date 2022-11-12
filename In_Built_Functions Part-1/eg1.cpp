#include<iostream>
using namespace std;

int main( )
{
string a;
a="James_Bond";
string::iterator i=a.begin( );
for( ;i!=a.end( );i++)cout<<*i<<endl;
return 0;
}