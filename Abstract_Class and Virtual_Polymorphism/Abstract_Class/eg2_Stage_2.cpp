#include<iostream>
using namespace std;
class Car
{
public:
virtual void manual( )=0;
};
class Maruti800:public Car
{
public:
void manual( )
{

}
};
int main( )
{
Maruti800 m;
return 0;
}