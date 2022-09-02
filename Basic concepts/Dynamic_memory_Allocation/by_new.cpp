#include<iostream>
#include<stdio.h>
using namespace std;
int main( )
{
int req,*x,y;
printf("Enter requirment: ");
scanf("%d",&req);
if(req<1)
{
printf("Invalid requirment.");
return 0;
}
x=new int[req];
if(x==NULL)
{
printf("Unalble to allocater memory for %d numbers.",req);
return 0;
}
for(y=0;y<req;y++)
{
cout<<"Enter number: ";
cin>>x[y];
}
cout<<"Your numbers are....."<<endl;
for(y=0;y<req;y++)
{
cout<<x[y]<<endl;
}
return 0;
}