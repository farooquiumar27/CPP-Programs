#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;

void addFriend( );
void displayList( );

int main( )
{
int ch;
while(1)
{
cout<<"1->Add friend"<<endl;
cout<<"2->Display list of friend"<<endl;
cout<<"3->Exit"<<endl;
cout<<"Enter your choice: ";
cin>>ch;
if(ch==1)addFriend( );
else if(ch==2)displayList( );
else if(ch==3)break;
else cout<<"Invalid choice"<<endl;
}
return 0;
}

class OutputFileStream
{
private:
FILE *f;
int lastOperationFailed;
int mode;
public:

static const int append=1;
static const int overwrite=2;

OutputFileStream()
{
this->f=NULL;
this->mode=-1;
this->lastOperationFailed=0;
}

OutputFileStream(const char *fileName,int mode)
{
this->f=NULL;
this->mode=-1;
this->lastOperationFailed=0;
this->open(fileName,mode);
}

void open(const char *fileName,int mode)
{
if(f!=NULL)
{
fclose(f);
this->f=NULL;
this->mode=-1;
}
this->lastOperationFailed=1;
if(fileName==NULL)return;
if(this->mode!=append&&this->mode!=overwrite)return;
if(this->mode==append)
{
this->f=fopen(fileName,"a");
}
else
{
this->f=fopen(fileName,"w");
}
if(this->f==NULL)return;
this->lastOperationFailed=0;
}

OutputFileStream & operator<<(char c)
{
this->lastOperationFailed=1;
if(this->f==NULL)return *this;
fputc(c,this->f);
this->lastOperationFailed=0;
return *this;
}

void close( )
{
this->lastOperationFailed=0;
if(this->f==NULL)return;
fclose(this->f);
}

int fail( )
{
return this->lastOperationFailed;
}

};

class InputFileStream
{
private:
FILE *k;
int lastOperationFailed;
public:
InputFileStream( )
{
this->k=NULL;
this->lastOperationFailed=0;
}
InputFileStream(const char *fileName)
{
this->k=NULL;
this->lastOperationFailed=0;
this->open(fileName);
}
void open(const char *fileName)
{
if(k!=NULL)
{
fclose(k);
this->k=NULL;
this->lastOperationFailed=0;
}
this->lastOperationFailed=1;
if(fileName==NULL)return;
this->k=fopen(fileName,"r");
if(this->k==NULL)return;
this->lastOperationFailed=0;
}

InputFileStream & operator>>(char &c)
{
this->lastOperationFailed=1;
if(this->k==NULL)return *this;
c=fgetc(this->k);
this->lastOperationFailed=0;
return *this;
}

void close( )
{
this->lastOperationFailed=0;
if(this->k==NULL)return;
fclose(this->k);
}

int fail( )
{
return this->lastOperationFailed;
}

};


void addFriend( )
{
char name[22],contactNumber[52];
fflush(stdin);
cout<<"Enter name: ";
fgets(name,22,stdin);
fflush(stdin);
name[strlen(name)-1]='\0';

for(int i=0;name[i]!='\0';i++)
{
if(name[i]=='!')
{
cout<<"Name cannot contain '!' symbole"<<endl;
return;
}
}

cout<<"Enter contact number: ";
fgets(contactNumber,52,stdin);
fflush(stdin);
contactNumber[strlen(contactNumber)-1]='\0';

for(int i=0;contactNumber[i]!='\0';i++)
{
if(contactNumber[i]=='!')
{
cout<<"Contact_Number cannot contain '!' symbole"<<endl;
return;
}
}

OutputFileStream f("file1.one",OutputFileStream::append);

int i;
i=0;
while(name[i]!='\0')
{
f<<name[i];
i++;
}
f<<'!';
i=0;
while(contactNumber[i]!='\0')
{
f<<contactNumber[i];
i++;
}
f<<'!';
f.close();
cout<<"Student added successFully"<<endl;

}


void displayList( )
{
char name[22],contactNumber[52],m;
int x;
InputFileStream k("file1.one");
if(k.fail( ))
{
cout<<"No friend added"<<endl;
return;
}
while(1)
{
k>>m;
if(k.fail())break;
name[0]=m;
x=1;
while(1)
{
k>>m;
if(m=='!')break;
name[x]=m;
x++;
}
name[x]='\0';
x=0;
while(1)
{
k>>m;
if(m=='!')break;
contactNumber[x]=m;
x++;
}
contactNumber[x]='\0';
cout<<"Name- "<<name<<"Contact_Number- "<<contactNumber<<endl;
}
k.close( );
return;
}