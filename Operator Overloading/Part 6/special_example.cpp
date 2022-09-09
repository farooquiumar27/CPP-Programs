#include<stdio.h>
#include<iostream>
using namespace std;
class IntCollection
{
private:
unsigned int **p,**r;
int ht=0,vt=0,count=0,ub=9;
int div=0,mod=0;
public:

IntCollection( )
{
p=new unsigned int *[10];
*p=new unsigned int[10];
}

//add start
void add(int num)
{

if(ht>9)
{

if(vt>ub-1)
{
int x=ub;
ub=ub+10;
r=new unsigned int *[ub];
int i;
for(i=0;i<=x;i++)r[i]=p[i];
unsigned int **q=p;
//for(int d=0;d<x;d++)delete q[d];
delete [ ]q;
p=r;
ht=0;
vt++;
p[vt]=new unsigned int[10];
p[vt][ht]=num;
ht++;
count++;
}
else
{
ht=0;
vt++;
p[vt]=new unsigned int[10];
p[vt][ht]=num;
ht++;
count++;
}

}
else
{
p[vt][ht]=num;
ht++;
count++;
}

}
//add ends

//give start
int operator[ ](int index)
{
if(index<0||index>count)return 0;
div=index/10;
mod=index%10;
return p[div][mod];
}
//give over

int getSize( )
{
return count;
}

//copy=operator function starts

void operator=(IntCollection &v)
{
delete [ ]p;
ht=v.ht;
vt=v.vt;
ub=v.ub;
count=v.count;
p=new unsigned int*[v.ub];
for(int i=0;i<=vt;i++)
{
p[i]=new unsigned int[10];
for(int j=0;j<=9;j++)p[i][j]=v.p[i][j];
}
}

//copy=operator function ends

};

int main( )
{
IntCollection ic;
int i;

for(i=1;i<=5034;i++)ic.add(i);
cout<<"List of numbers of ic1.."<<endl;
for(int j=0;j<ic.getSize();j++)cout<<ic[j]<<endl;

IntCollection ic2;
ic2=ic;
ic2.add(4030);
ic2.add(5040);
cout<<"List of numbers of ic1.."<<endl;
for(int j=0;j<ic2.getSize();j++)cout<<ic2[j]<<endl;

return 0;
}