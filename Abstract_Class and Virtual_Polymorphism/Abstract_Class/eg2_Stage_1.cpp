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
}
int main( )
{
Maruti800 m;//this line won't compile,Maruti800 is an asbtract class
return 0;
}