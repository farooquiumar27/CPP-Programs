#include<iostream>
using namespace std;

class Bulb
{
private:
  int w;
public:
  void setWattage(int p)
  {
     w=p; 
  }
   int getWattage( )
   {
      return w;
   }
};

int main()
{
Bulb b;
b.w=100;
printf("The value of wattage is %d.\n",b.w);
return 0;
}