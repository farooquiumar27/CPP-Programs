#include<iostream>
using namespace std;
class aaa
{
public:
virtual void sam(int) throw( ) =0;
};
class bbb : public aaa
{
public:
void sam(int e)
{
if(e==5) throw e;
cout<<"Something processing"<<endl;
}
};
int main( )
{
bbb b;
b.sam(50);
b.sam(5);
return 0;
}