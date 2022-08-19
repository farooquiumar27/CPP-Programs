#include<iostream>
using namespace std;
void call(int* p)
{
*p=50;
}
int main()
{
int x;
x=20;
call(&x);
cout<<"The value of x is "<<x<<endl;
return 0;
}