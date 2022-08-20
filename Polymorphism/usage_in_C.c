#include<stdio.h>

void addTwoNumbers(int p,int q)
{
printf("Total is %d.\n",p+q);
}

void addThreeNumbers(int p,int q,int r)
{
printf("Total is %d.\n",p+q+r);
}

int main()
{
addTwoNumbers(10,20);
addThreeNumbers(10,20,30);
return 0;
}