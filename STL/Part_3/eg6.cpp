#include<queue>
#include<iostream>
#include<vector>
using namespace std;

class MyComparator
{
public:
bool operator( )(int e,int f)
{
return e<f;
}
};

int main( )
{
MyComparator my;
priority_queue<int,vector<int>,MyComparator> q(my);
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