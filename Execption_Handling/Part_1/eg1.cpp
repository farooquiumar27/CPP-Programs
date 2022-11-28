//it fails on y==0;
#include<iostream>
using namespace std;
int main( )
{
int x,y,q,r;
cout<<"Enter divident: ";
cin>>x;
cout<<"Enter divisor: ";
cin>>y;
q=x/y;
r=x%y;
cout<<"Quiotent: "<<q<<endl;
cout<<"Remender: "<<r<<endl;
return 0;
}
