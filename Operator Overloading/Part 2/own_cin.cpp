#include<stdio.h>
class Keyboard
{
public:
Keyboard & operator>>(int &x)
{
scanf("%d",&x);
fflush(stdin);
return *this;
}
Keyboard  & operator>>(char &x)
{
scanf("%c",&x);
fflush(stdin);
return *this;
}
};
namespace house
{
Keyboard kin;
}
using namespace house;
int main( )
{
int x;
char y;
printf("Enter number: ");
kin>>x;
printf("Enter charactor: ");
kin>>y;
printf("Number is %d and charactor is %c.\n",x,y);
scanf("%d",x);
return 0;
}