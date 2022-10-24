#include<iostream>
using namespace std;

class Iterator
{
private:
Iterator *iptr;
public:
Iterator()
{
iptr=NULL;
}
Iterator(Iterator *iptr)
{
this->iptr=iptr;
}
Iterator(const Iterator &other)
{
this->iptr=other.iptr;
}
Iterator & operator=(const Iterator &other)
{
this->iptr=other.iptr;
}
virtual int hasMoreElements( )
{
if(iptr!=NULL)return this->iptr->hasMoreElements( );
return 0;
}
virtual int next( )
{
if(iptr!=NULL)return this->iptr->next( );
return 0;
}
};

class Iterable
{
public:
virtual Iterator getIterator()=0;
};

class Forward_List
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
int operator[ ](int index)
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

class Forward_List_Iterator : public Iterator
{
private:
Node *ptr;
public:
Forward_List_Iterator( )
{
this->ptr=NULL;
}
void init(Node *ptr)
{
this->ptr=ptr;
}
Forward_List_Iterator(const Forward_List_Iterator &other)
{
this->ptr=other.ptr;
}
Forward_List_Iterator & operator=(const Forward_List_Iterator &other)
{
this->ptr=other.ptr;
}
int hasMoreElements( )
{
return this->ptr!=NULL;
}
int next( )
{
if(this->ptr==NULL)return 0;
int data=this->ptr->data;
this->ptr=this->ptr->next;
return data;
}
};
private:
Forward_List_Iterator forward_list_iterator;
public:
Iterator getIterator()
{
forward_list_iterator.init(this->start);
return Iterator(&forward_list_iterator);
}
};

int main( )
{
Forward_List list1;
bool succ;

list1.add(100,&succ);
list1.add(50,&succ);
list1.add(25,&succ);
list1.add(12,&succ);

Iterator iter=list1.getIterator( );
while(iter.hasMoreElements( ))
{
cout<<iter.next( )<<endl;
}

return 0;
}