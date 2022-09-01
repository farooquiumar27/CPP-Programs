#include<iostream>
using namespace std;
void add(int p,int q,int r=0)
{
int s;
s=p+q+r;
cout<<"Total is "<<s<<endl;
}
int main( )
{
add(10,20,30);
add(10,20);
return 0;
}