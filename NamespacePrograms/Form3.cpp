#include<stdio.h>
namespace management
{
namespace sales
{
int x=10;
int getLastTransactionAmount()
{
return 1000;
}
}
namespace purchase
{
int y=20;
int getLastTransactionAmount()
{
return 5000;
}
}
}
using namespace management::sales;
using namespace management::purchase;
int main()
{
int amount;
printf("%d numbers for sales.\n",x);
printf("%d numbers for purchase.\n",y);
amount=management::sales::getLastTransactionAmount();
printf("Sales amount-%d\n",amount);
return 0;
}