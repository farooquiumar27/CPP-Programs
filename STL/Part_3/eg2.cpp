#include<stack>
#include<iostream>
using namespace std;

int main( )
{
stack<int> s;
s.push(40);
s.push(30);
s.push(20);
s.push(10);
cout<<"Size of stack is "<<s.size( )<<endl;

while(!s.empty())
{
cout<<s.top( )<<endl;
s.pop( );
}

return 0;
}