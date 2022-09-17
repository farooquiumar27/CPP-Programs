#include<iostream>
using namespace std;
class TMStack
{
private:
int x[10];
int top;
public:
TMStack( );
TMStack(const TMStack &other);
void operator=(const TMStack &other);
virtual ~TMStack( );
void push(int);
int pop( );
int isEmpty( );
int isFull( );
};
TMStack::TMStack( )
{
this->top=10;
}
TMStack::TMStack(const TMStack &other)
{
cout<<"Copy constructor"<<endl;
for(int e=9;e>=other.top;e--)this->x[e]=other.x[e];
this->top=other.top;
}
void TMStack::operator=(const TMStack &other)
{
cout<<"= operator"<<endl;
for(int e=9;e>=other.top;e--)this->x[e]=other.x[e];
this->top=other.top;
}
TMStack::~TMStack( )
{
//do nothing
}
void TMStack::push(int e)
{
if(top==0)return;
this->x[--top]=e;
}
int TMStack::pop( )
{
if(top==10)return 0;
int e;
e=this->x[top++];
return e;
}
int TMStack::isEmpty( )
{
return this->top==10;
}
int TMStack::isFull( )
{
return this->top==0;
}
int main( )
{
TMStack s1;
s1.push(10);
s1.push(20);
s1.push(30);
TMStack s2=s1;
s2.push(40);
TMStack s3;
s3=s2;
cout<<"Contents of s1"<<endl;
while(!s1.isEmpty())cout<<s1.pop()<<endl;
cout<<"Contents of s2"<<endl;
while(!s2.isEmpty())cout<<s2.pop()<<endl;
s3.push(50);
cout<<"Contents of s3"<<endl;
while(!s3.isEmpty())cout<<s3.pop()<<endl;
return 0;
}