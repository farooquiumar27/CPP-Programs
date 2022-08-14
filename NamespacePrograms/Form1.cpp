#include<stdio.h>

namespace sales
{
int numberOfTransection=50;
int getLastTransactionAmount()
{
return 1000;
}
}

namespace purchase
{
int numberOfTransection=100;
int getLastTransactionAmount()
{
return 5000;
}
}

int main()
{
int amount;
amount=sales::getLastTransactionAmount();
printf("Sales-%d\n",amount);
amount=purchase::getLastTransactionAmount();
printf("Purchase-%d\n",amount);
return 0;
}


