#include<iostream>
using namespace std;
int main( )
{
int x,y,q,r;
cout<<"Enter divident: ";
cin>>x;
cout<<"Enter divisor: ";
cin>>y;
if(y!=0)
{
q=x/y;
r=x%y;
cout<<"Quiotent: "<<q<<endl;
cout<<"Remender: "<<r<<endl;
}
else
{
cout<<"Cannot divide with 0"<<endl;
}
return 0;
}
