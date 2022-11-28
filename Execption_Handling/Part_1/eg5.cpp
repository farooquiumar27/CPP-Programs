#include<iostream>
using namespace std;
int main( )
{
int req,*x,y;
cout<<"Enter requirment: ";
cin>>req;
try
{
x=new int[req];
}catch(bad_alloc &ba)
{
cout<<"Invalid requirment"<<endl;
cout<<ba.what( )<<endl;
return 0;
}
int total=0;
for(int e=0;e<req;e++)
{
cout<<"Enter number: ";
cin>>x[e];
total=total+x[e];
}
cout<<"Total is "<<total<<endl;
return 0;
}