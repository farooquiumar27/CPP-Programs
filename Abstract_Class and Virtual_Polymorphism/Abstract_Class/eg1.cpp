#include<iostream>
using namespace std;
class Car
{
public:
virtual void manual( )=0;//pure virtual function
};
int main( )
{
Car c;//this line won't compile,object cannot be created form an abstract class
Car *p;//we can create pointer form an abstract class
new Car;//this line won't compile,object cannot be created form an abstract class
return 0;
}