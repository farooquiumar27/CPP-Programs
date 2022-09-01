#include<iostream>
using namespace std;

class IntCollection
{
private:
int size;
int *x;
public:
IntCollection(int req)
{
if(req>0)
{
x=new int[req];
size=req;
}
else
{
size=0;
x=NULL;
}
}
IntCollection(IntCollection &v)
{
size=v.size;
x=new int [size];
for(int i=0;i<size;i++)
{
x[i]=v.x[i];
}
}
void acceptInput( )
{
for(int i=0;i<size;i++)
{
cout<<"Enter a number: ";
cin>>x[i];
}
}
void printCollection( )
{
for(int i=0;i<size;i++)
{
cout<<x[i]<<endl;
}
}
};
int main()
{
IntCollection c1(5);
cout<<"Accepting collection of c1"<<endl;
c1.acceptInput( );
cout<<"Printing collection of c1"<<endl;
c1.printCollection( );
IntCollection c2(c1);
cout<<"Printing collection of c2"<<endl;
c2.printCollection( );
cout<<"Accepting collection of c2"<<endl;
c2.acceptInput( );
cout<<"Printing collection of c2"<<endl;
c2.printCollection( );
return 0;
}