//In this example complier will define empty_constructor and copy_constructor.
#include<iostream>
using namespace std;
class Bulb
{
private:
int w;
public:
void setWattage(int e)
{
w=e;
}
int getWattage( )
{
return w;
}
};
int main()
{
Bulb b;
//here complier will call to empty_constructor Bulb( )
b.setWattage(50);
cout<<"Wattage is "<<b.getWattage( )<<endl;
return 0;
}