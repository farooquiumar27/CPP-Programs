#include<iostream>
using namespace std;
class PiggyBank
{
private:
int amount;
public:
void setAmount(int e)
{
amount=e;
}
int getAmount( )
{
return this->amount;
}
PiggyBank( )
{
amount=0;
}
PiggyBank(int e)
{
amount=e;
}
PiggyBank operator+(PiggyBank &v)
{
int total=this->amount+v.amount;
return PiggyBank(total);
}
};
int main( )
{
PiggyBank p1(100),p2(200),p3; 
p3=p1+p2;
cout<<p3.getAmount( );
return 0;
}