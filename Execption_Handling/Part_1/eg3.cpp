#include<iostream>
using namespace std;
int main( )
{
int x,y,q,r;
cout<<"Enter divident: ";
cin>>x;
cout<<"Enter divisor: ";
cin>>y;
try
{
if(y==0)throw y;
q=x/y;
r=x%y;
cout<<"Quiotent: "<<q<<endl;
cout<<"Remender: "<<r<<endl;
}catch(int i)
{
cout<<"Cannot divide with "<<i<<endl;
}
return 0;
}
