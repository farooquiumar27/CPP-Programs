#include<iostream>
using namespace std;

class List
{
public:
virtual void add(int data,bool *success)=0;
virtual int get(int index,bool *success)const=0;
virtual void update(int index,int data,bool *success)=0;
virtual int getSize( )=0;
virtual void removeAll( )=0;
virtual void clearAll( )=0;
virtual void insertAt(int index,int data,bool *success)=0;
virtual int removeAt(int index,bool *success)=0;

};

/*
The class that will inherit this class will contain...
1)->Default constructor
2)->Parameterized constructor
3)->Copy constructor
4)->Operator = method
5)->Operartor += method
6)->Operator [ ] method
7)->Operator + method
8)->Virtual distructor
*/

class Forward_List : public List
{
private:
int size;
class Node
{
public:
int data;
Node *next;
};
Node *start,*end;

public:

//Default constructor
Forward_List( )
{
this->start=NULL;
this->end=NULL;
size=0;
}

//Parameterized constructor
Forward_List(int bufferSize)
{
this->start=NULL;
this->end=NULL;
size=0;
}

//Add Function
void add(int data,bool *success)
{
if(success)*success=false;
Node *t;
if(start==NULL&&end==NULL)//empty list
{
t=new Node;
if(t==NULL)return;
t->data=data;
start=end=t;
t->next=NULL;
size++;
if(success)*success=true;
return;
}
t=new Node;
if(t==NULL)return;
t->data=data;
t->next=NULL;
end->next=t;
end=t;
size++;
if(success)*success=true;
}

//Get Function
int get(int index,bool *success) const
{
if(success)*success=false;
if(index<0||index>=size)return 0;
int data,x;
Node *j;
for(x=0,j=start;x<index;x++,j=j->next);
data=j->data;
if(success)*success=true;
return data;
}

//Update Function
void update(int index,int data,bool *success)
{
if(success)*success=false;
if(index<0||index>=size)return;
Node *t;
int x;
for(t=start,x=0;x<index;x++,t=t->next);
t->data=data;
if(success)*success=true;
}

//Get size Function
int getSize( )
{
return this->size;
}

//Remove all Function
void removeAll( )
{
Node *t;
for(t=start,start=start->next;start!=NULL;start=start->next)
{
delete t;
t=start;
}
delete t;
this->size=0;
this->start=NULL;
this->end=NULL;
}

//Clear all Function
void clearAll( )
{
Node *t;
for(t=start,start=start->next;start!=NULL;start=start->next)
{
delete t;
t=start;
}
delete t;
this->size=0;
this->start=NULL;
this->end=NULL;
}

//Insert at Function
void insertAt(int index,int data,bool *success)
{
if(success)*success=false;
if(index<0||index>size)return;
Node *t;
if(index==0)//insert at top
{
t=new Node;
if(t==NULL)return;
t->data=data;
t->next=start;
start=t;
size++;
if(success)*success=true;
return;
}
if(index==size)//add at end
{
add(data,success);
if(success)*success=true;
return;
}
Node *p,*j;
int x=0;
for(p=start;x<index;p=p->next,x++)j=p;
t=new Node;
if(t==NULL)return;
t->data=data;
t->next=p;
j->next=t;
size++;
if(success)*success=true;
return;
}

//Remove at Function
int removeAt(int index,bool *success)
{
if(success)*success=false;
if(index<0||index>=size)return 0;
Node *t;
int num;
if(index==0)//remove at top
{
t=start;
start=start->next;
num=t->data;
delete t;
size--;
if(success)*success=true;
return num;
}
Node *p,*j;
int x;
for(p=start,x=0;x<index;x++,p=p->next)j=p;
j->next=p->next;
num=p->data;
delete p;
size--;
if(success)*success=true;
return num;
}

//Copy Constructor
Forward_List(const Forward_List &other)
{
this->start=NULL;
this->end=NULL;
size=0;
bool succ;
for(int x=0;x<other.size;x++)add(other.get(x,&succ),&succ);
}

//Operator = Function
Forward_List & operator=(const Forward_List &other)
{
cout<<"Operator = function"<<endl;
this->start=NULL;
this->end=NULL;
size=0;
bool succ;
for(int x=0;x<other.size;x++)this->add(other.get(x,&succ),&succ);
}

//Operator += Function
Forward_List & operator+=(Forward_List &other)
{
bool succ;
for(int x=0;x<other.size;x++)this->add(other.get(x,&succ),&succ);
}

//Operator [ ] Function
int & operator[ ](int index)
{
int y=0;
if(index<0||index>=size)return y;
int x;
Node *t;
for(t=start,x=0;x<index;x++)t=t->next;
return t->data;
}

//Operator + Function
Forward_List operator+(const Forward_List &other)
{
Forward_List listZ;
Node *t;
bool succ;
int x;
for(t=this->start,x=0;t!=NULL;t=t->next,x++)listZ.add(this->get(x,&succ),&succ);
for(t=other.start,x=0;t!=NULL;t=t->next,x++)listZ.add(other.get(x,&succ),&succ);
return listZ;
}

//Destructor 
~Forward_List( )
{
Node *t;
for(t=start,start=start->next;start!=NULL;start=start->next)
{
delete t;
t=start;
}
delete t;
this->size=0;
this->start=NULL;
this->end=NULL;
}

};
