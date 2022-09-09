#include<iostream>
using namespace std;
class aaa
{
private:
int x[10];
public:
void setValueAt(int index,int num)
{
if(index>=0||index<10)x[index]=num;
}
int getValueAt(int index)
{
return x[index];
}
int operator[ ](int index)
{
return x[index];
}
};
int main( )
{
int num;
aaa a;
for(int i=0;i<10;i++)
{
cout<<"Enter number : ";
cin>>num;
a.setValueAt(i,num);
}
cout<<"List of numbers..."<<endl;

for(int i=0;i<10;i++)
{
cout<<a[i]<<endl;
}
return 0;
}