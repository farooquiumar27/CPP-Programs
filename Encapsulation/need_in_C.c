#include<stdio.h>

struct rectangle
{
int length;
int breath;
};

void createRectangle( )
{
int area;
struct rectangle abc;
printf("Enter the length of rectangle: ");
scanf("%d",&abc.length);
printf("Enter the berath of rectangle: ");
scanf("%d",&abc.breath);
area=abc.length*abc.breath;
printf("The area of the rectangle with length %d and breath %d is %d.\n",abc.length,abc.breath,area);
}

//the main is been written by another person.
int main()
{
 //createRectangle( );//should be used.
int length,breath,area;
printf("Enter the length of rectangle: ");
scanf("%d",&length);
printf("Enter the berath of rectangle: ");
scanf("%d",&breath);
area=2*(length+breath);
printf("The area of the rectangle with length %d and breath %d is %d.\n",length,breath,area);
return 0;
}