#include<queue>
#include<iostream>
using namespace std;

int main( )
{
priority_queue<int> q;
q.push(10);
q.push(5);
q.push(100);
q.push(24);
q.push(45);

cout<<q.size( )<<endl;
cout<<"***********"<<endl;

while(!q.empty( ))
{
cout<<q.top( )<<endl;
q.pop( );
}
return  0;
}