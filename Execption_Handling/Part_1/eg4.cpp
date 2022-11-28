#include<iostream>
using namespace std;

int calculate(int divident,int divisor,int *q,int *r)
{
if(divisor==0)throw divisor;
*q=divident/divisor;
*r=divident%divisor;
}

int main( )
{
int x,y,q,r;
cout<<"Enter divident: ";
cin>>x;
cout<<"Enter divisor: ";
cin>>y;
try
{
calculate(x,y,&q,&r);
cout<<"Quiotent: "<<q<<endl;
cout<<"Remender: "<<r<<endl;
}catch(int i)
{
cout<<"Cannot divide with "<<i<<endl;
}
return 0;
}