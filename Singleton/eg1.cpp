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
static Object *objectManager;
public:
static Object* getInstance( )
{
if(objectManager==NULL)objectManager=new Object;
return objectManager;
}
};
Object* Object::objectManager=NULL;

void sam( )
{
Object *o;
o=Object::getInstance( );
}

int main( )
{
Object *o;
o=Object::getInstance( );
sam( );
return 0;
}