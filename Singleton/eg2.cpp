#include<iostream>
using namespace std;

class Object
{
private:
int x[10];
Object( )
{
cout<<"Object Createded"<<endl;
}
~Object( )
{
cout<<"Destructor got called"<<endl;
}
static Object *objectManager;
static int referenceDistributedTo;
public:
static Object* getInstance( )
{
referenceDistributedTo++;
if(objectManager==NULL)objectManager=new Object;
return objectManager;
}
void remove( )
{
referenceDistributedTo--;
if(referenceDistributedTo==0)delete objectManager;
}
};
Object* Object::objectManager=NULL;
int Object::referenceDistributedTo=0;
void sam( )
{
Object *o;
o=Object::getInstance( );
o->remove( );
}

int main( )
{
Object *o;
o=Object::getInstance( );
sam( );
o->remove( );
return 0;
}