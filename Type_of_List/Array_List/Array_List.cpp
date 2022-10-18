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

class Array_List : public List
{
private:
int **ptr;
int size;
int capacity;
int allocationFlag;
public:

//Default Constructor
Array_List( )
{
cout<<"Default constructor"<<endl;
ptr=new int*[10];
ptr[0]=new int[10];
capacity=10;
size=0;
allocationFlag=0;
}

//Parameterized Constructor
Array_List(int bufferSize)
{
cout<<"Parameterized constructor"<<endl;
allocationFlag=0;
if(bufferSize<=0)
{
ptr=new int*[10];
ptr[0]=new int[10];
capacity=10;
size=0;
return;
}
int rows;
rows=bufferSize/10;
if(bufferSize%10!=0)rows++;
int numberOfPointer;
numberOfPointer=rows+10-(rows%10);
ptr=new int*[numberOfPointer];
for(int e=0;e<numberOfPointer;e++)this->ptr[e]=new int[10];
this->size=0;
this->capacity=rows*10;
}

//Add Row Function
void addRow(int *succ)
{
if(succ)*succ=0;
int row,coloum;
int **temp;
row=size/10;
if(size%10!=0)row++;
if(size%100==0)
{
temp=new int*[row+10];
if(temp==NULL)return;
for(int x=0;x<row;x++)temp[x]=ptr[x];
delete [ ] ptr;
ptr=temp;
}
ptr[row]=new int[10];
if(ptr[row]==NULL)return;
capacity=capacity+10;
if(succ)*succ=1;
}

//Add function
void add(int data,bool *success)
{
int succ;
if(success)*success=false;
if(size>=capacity)addRow(&succ);
if(succ==0)return;
int row,coloum;
row=size/10;
coloum=size%10;
ptr[row][coloum]=data;
size++;
if(success)*success=true;
}

//Get Function
int get(int index,bool *success) const
{
if(success)*success=false;
if(index<0||index>=size)return 0;
int row,coloum;
row=index/10;
coloum=index%10;
if(success)*success=true;
return ptr[row][coloum];
}

//Updatre Function
void update(int index,int data,bool *success)
{
if(success)*success=false;
if(index<0||index>=size)return;
int row,coloum;
row=index/10;
coloum=index%10;
ptr[row][coloum]=data;
if(success)*success=true;
}

//Get size Function
int getSize( )
{
return this->size;
}

//Clear all Function
void removeAll( )
{
this->size=0;
}
void clearAll( )
{
this->size=0;
}

//InsertAt Function
void insertAt(int index,int data,bool *success)
{
if(success)*success=false;
if(index<0||index>size)return;
bool succ;
if(index==this->size)
{
add(data,&succ);
return;
}
add(get(size-1,&succ),&succ);
int x;
for(x=size-3;x>=index;x--)update(x+1,get(x,&succ),&succ);
update(x,data,&succ);
if(success)*success=true;
}

//RemoveAt Function
int removeAt(int index,bool *success)
{
if(success)*success=false;
if(index<0||index>=size)return 0;
bool succ;
int x;
for(x=index+1;x<size;x++)update(x-1,get(x,&succ),&succ);
size--;
if(success)*success=true;
}

//copy constructor
Array_List(const Array_List &other)
{
bool succ;
int bufferSize=other.size;
if(bufferSize<=0)
{
ptr=new int*[10];
ptr[0]=new int[10];
capacity=10;
size=0;
allocationFlag=0;
}
else
{
int rows;
rows=bufferSize/10;
if(bufferSize%10!=0)rows++;
int numberOfPointer;
numberOfPointer=rows+10-(rows%10);
this->ptr=new int*[numberOfPointer];
for(int e=0;e<rows;e++)this->ptr[e]=new int[10];
this->capacity=rows+10;
this->size=0;
}
for(int e=0;e<other.size;e++)
{
this->add(other.get(e,&succ),&succ);
}
}
//Operator = Function
Array_List & operator=(const Array_List &other)
{
if(allocationFlag==0)
{
this->size=0;
bool succ;
for(int e=0;e<other.size;e++)this->add(other.get(e,&succ),&succ);
return *this;
}
else
{

int rows=this->capacity/10;
if(size%10!=0)rows++;
for(int x=0;x<rows;x++)delete [ ] ptr[x];
delete [ ] ptr;
this->size=other.size;
this->capacity=other.capacity;
this->ptr=other.ptr;
}

}

//Operator += function
Array_List & operator+=(const Array_List &other)
{
bool succ;
for(int e=0;e<other.size;e++)this->add(other.get(e,&succ),&succ);
return *this;
}

//Operator + Function
Array_List operator+(const Array_List &other)
{
Array_List k;
bool succ;
for(int x=0;x<this->size;x++)k.add(this->get(x,&succ),&succ);
for(int x=0;x<other.size;x++)k.add(other.get(x,&succ),&succ);
allocationFlag=1;
return k;
} 

//Operator [ ] Function
int & operator[ ](int index)
{
int row,coloum;
row=index/10;
coloum=index%10;
return ptr[row][coloum];
}

//Destructor
~Array_List( )
{
cout<<"Virtual destructor"<<endl;
int rows=this->capacity/10;
if(size%10!=0)rows++;
for(int x=0;x<rows;x++)delete [ ] ptr[x];
delete [ ] ptr;
}

};
