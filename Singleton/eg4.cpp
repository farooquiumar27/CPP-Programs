#include<iostream>
using namespace std;

class Object
{
private:
class DataManager
{
private:
int x[10];
public:
DataManager( )
{
for(int i=0;i<10;i++)x[i]=i*i;
}
~DataManager( )
{
//delete [ ] x;
}
void printDS( )
{
for(int i=0;i<10;i++)cout<<x[i]<<endl;
}
};
static DataManager dataManager;
public:
void printInfo( )
{
dataManager.printDS( );
}
};
Object::DataManager Object::dataManager;

int main( )
{
Object one;
one.printInfo( );
Object two;
two.printInfo( );
return 0;
}