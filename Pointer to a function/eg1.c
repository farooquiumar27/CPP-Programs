#include<stdio.h>
void sum(int x,int y)
{
printf("Total is %d\n",x+y);
}
int product(int x)
{
return (x*x);
}
int main( )
{
void (*hhh)(int,int);
int (*stf)(int);
hhh=sum;
hhh(50,40);
stf=product;
printf("Square is %d\n",stf(20));
return 0;
}