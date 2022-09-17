#include<iostream>
using namespace std;
template<class T>
class TMStack
{
private:
T x[10];
int top;
public:
TMStack( );
TMStack(const TMStack &other);
void operator=(const TMStack &other);
virtual ~TMStack( );
void push(T);
T pop( );
int isEmpty( );
int isFull( );
};
template<class T>
TMStack<T>::TMStack( )
{
this->top=10;
}
template<class T>
TMStack<T>::TMStack(const TMStack<T> &other)
{
for(int e=9;e>=other.top;e--)this->x[e]=other.x[e];
this->top=other.top;
}
template<class T>
void TMStack<T>::operator=(const TMStack<T> &other)
{
for(int e=9;e>=other.top;e--)this->x[e]=other.x[e];
this->top=other.top;
}
template<class T>
TMStack<T>::~TMStack( )
{
//do nothing
}
template<class T>
void TMStack<T>::push(T e)
{
if(top==0)return;
this->x[--top]=e;
}
template<class T>
T TMStack<T>::pop( )
{
if(top==10)return 0;
T e;
e=this->x[top++];
return e;
}
template<class T>
int TMStack<T>::isEmpty( )
{
return this->top==10;
}
template<class T>
int TMStack<T>::isFull( )
{
return this->top==0;
}
class Bulb
{
private:
int wattage;
public:
Bulb( )
{
this->wattage=0;
}
Bulb(int wattage)
{
this->wattage=wattage;
}
void setWattage(int wattage)
{
this->wattage=wattage;
}
int getWattage( )
{
return this->wattage;
}
};
int main( )
{
TMStack<int> s1;
s1.push(10);
s1.push(20);
s1.push(30);
TMStack<char> s2;
s2.push('A');
s2.push('B');
s2.push('C');
TMStack<float> s3;
s3.push(22.5f);
s3.push(55.2f);
s3.push(33.5f);
cout<<"Contents of s1"<<endl;
while(!s1.isEmpty())cout<<s1.pop()<<endl;
cout<<"Contents of s2"<<endl;
while(!s2.isEmpty())cout<<s2.pop()<<endl;
s3.push(50);
cout<<"Contents of s3"<<endl;
while(!s3.isEmpty())cout<<s3.pop()<<endl;
TMStack<Bulb *> s4;
s4.push(new Bulb);
s4.push(new Bulb(60));
s4.push(new Bulb(100));
cout<<"Contents of s4"<<endl;
while(!s4.isEmpty())
{
Bulb *b=s4.pop();
cout<<b->getWattage( )<<endl;
}
return 0;
}