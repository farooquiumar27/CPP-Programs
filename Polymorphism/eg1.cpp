#include<iostream>
using namespace std;

void add(int p,int q)
{
cout<<"Total is "<<p+q<<endl;
}

void add(float p,float q)
{
cout<<"Total is "<<p+q<<endl;
}

int main( )
{
add(10,20);
add(2.33f,5.79f);
return 0;
}
