#include<stdio.h>
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
using namespace sales;
using namespace purchase;
int main()
{
int amount;
printf("%d numbers for sales.\n",x);
printf("%d numbers for purchase.\n",y);
amount=sales::getLastTransactionAmount();
printf("%d amount for sales.\n",amount);
return 0;
}