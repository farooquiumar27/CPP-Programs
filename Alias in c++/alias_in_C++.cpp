#include<iostream>
using namespace std;
int main()
{
int x;
x=20;
int &p=x;
cout<<"The value of x "<<p<<endl;
p=50;
cout<<"The value of  x "<<x<<endl;
return 0;
}