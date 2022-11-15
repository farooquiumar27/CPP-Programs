#include<iostream>
#include<array>
using namespace std;

int main( )
{
array<int,10> ar;
ar[0]=10;
ar[1]=20;
ar[2]=30;
ar[3]=40;
for(int e=0;e<ar.size( );e++)cout<<ar[e]<<endl;
cout<<"*************"<<endl;
for(array<int,10>::iterator i=ar.begin( );i!=ar.end( );++i)cout<<*i<<endl;
ar.fill(0);
for(array<int,10>::iterator i=ar.begin( );i!=ar.end( );++i)cout<<*i<<endl;
return 0;
}