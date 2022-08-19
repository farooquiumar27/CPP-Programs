#include<stdio.h>
int main()
{
int x,*p;
x=10;
p=&x;
printf("%d\n",*p);
*p=20;
printf("%d\n",x);
return 0;
}