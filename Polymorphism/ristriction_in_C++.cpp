//This code won't compile.

#include<iostream>
using namespace std;
void add(int p,int q)
{
cout<<"Total is "<<p+q<<endl;
}
void add(int r,int s)
{
cout<<"Total is "<<s+r<<endl;
}
int main()
{
add(10,20);
add(30,40);
return 0;
}