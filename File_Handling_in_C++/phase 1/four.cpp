#include<fstream>
#include<iostream>
#include<string.h>
#include<limits>
#include<stdlib.h>
#include<ios>
using namespace std;

class Student
{
private:
int rollNumber;
char name[21];
char gender;
public:
void setRollNumber(int rollNumber)
{
this->rollNumber=rollNumber;
}
int getRollNumber( )
{
return this->rollNumber;
}
void setName(const char *name)
{
strcpy(this->name,name);
}
void getName(char *name)
{
strcpy(name,this->name);
}
void setGender(char gender)
{
this->gender=gender;
}
char getGender( )
{
return gender;
}

};

class OutputFileStream
{
private:
FILE *f;
int lastOperationFailed;
int mode;
public:

static const int append=1;
static const int overwrite=2;
static const int binary=2;

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
mode=-1;
}
this->lastOperationFailed=1;
if(fileName==NULL)return;
if(mode!=append && mode!=overwrite && mode!=(append | binary) &&mode!=(overwrite | binary))return;
if(mode==append)
{
this->f=fopen(fileName,"a");
}
else
if(mode==overwrite)
{
this->f=fopen(fileName,"w");
}
else
if(mode==(append | binary))
{
this->f=fopen(fileName,"ab");
}
else
if(mode==(overwrite | binary))
{
this->f=fopen(fileName,"wb");
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

OutputFileStream & operator<<(int num)
{
char a[21];
sprintf(a,"%d",num);
this->lastOperationFailed=1;
if(this->f==NULL)return *this;
fputs(a,this->f);
this->lastOperationFailed=0;
return *this;
}

OutputFileStream & operator<<(const char *str)
{
this->lastOperationFailed=1;
if(this->f==NULL)return *this;
fputs(str,this->f);
this->lastOperationFailed=0;
return *this;
}

OutputFileStream & operator<<(string &str)
{
this->lastOperationFailed=1;
if(this->f==NULL)return *this;
fputs(str.c_str( ),this->f);
this->lastOperationFailed=0;
return *this;
}

void write(const char *stream,int size)
{
this->lastOperationFailed=1;
if(this->f==NULL)return;
fwrite(&stream,size,1,this->f);
this->lastOperationFailed=0;
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
int mode;
public:
const static int reading=1;
const static int binary=4;

InputFileStream( )
{
this->k=NULL;
this->lastOperationFailed=0;
mode=-1;
}

InputFileStream(const char *fileName)
{
this->k=NULL;
this->lastOperationFailed=0;
this->mode=-1;
this->open(fileName,reading);
}

InputFileStream(const char *fileName,int mode)
{
this->k=NULL;
this->lastOperationFailed=0;
this->mode=mode;
this->open(fileName,mode);
}
void open(const char *fileName,int mode)
{
if(k!=NULL)
{
fclose(k);
this->k=NULL;
this->lastOperationFailed=0;
this->mode=-1;
}

if(mode!=reading && mode!=binary)return;
this->lastOperationFailed=1;
if(fileName==NULL)return;
if(mode==reading)this->k=fopen(fileName,"r");
else this->k=fopen(fileName,"rb");
if(this->k==NULL)return;
this->lastOperationFailed=0;
}

InputFileStream & operator>>(int &num)
{
char a[21],c;
this->lastOperationFailed=1;
if(this->k==NULL)return *this;
if(feof(k))return *this;
int x=0;
while(1)
{
c=fgetc(this->k);
if(feof(k)||c==' '||c=='\n')break;
a[x]=c;
x++;
}
if(x==0) *this;
a[x]='\0';
num=atoi(a);
this->lastOperationFailed=0;
return *this;
}

InputFileStream & operator>>(char *str)
{
char c;
this->lastOperationFailed=1;
if(this->k==NULL)return *this;
if(feof(k))return *this;
int x=0;
char *a=str;

while(1)
{
c=fgetc(this->k);
if(feof(k)||c=='\n')break;
a[x]=c;
x++;
}
a[x]='\0';
this->lastOperationFailed=0;
return *this;
}

InputFileStream & operator>>(string &str)
{
char c;
str.clear( );
this->lastOperationFailed=1;
if(this->k==NULL)return *this;
if(feof(k))return *this;

while(1)
{
c=fgetc(this->k);
if(feof(k)||c=='\n')break;
str.push_back(c);
}

this->lastOperationFailed=0;
return *this;
}

InputFileStream & operator>>(char &c)
{
this->lastOperationFailed=1;
if(this->k==NULL)return *this;
c=fgetc(this->k);
this->lastOperationFailed=0;
return *this;
}

void read(const char *stream,int size)
{
this->lastOperationFailed=1;
if(this->k=NULL)return;
if(feof(this->k))return;
fread(&stream,size,1,k);
if(feof(this->k))return;
this->lastOperationFailed=0;
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


void addStudent( )
{
int rollNumber;
string name;
char gender;
cout<<"Enter roll number: ";
cin>>rollNumber;
//fflush(stdin);

cin.ignore(numeric_limits<streamsize>::max( ),'\n');
cout<<"Enter name: ";
getline(cin,name);

fflush(stdin);
cout<<"Enter gender: ";
gender=getchar( );
fflush(stdin);

ofstream f("version3.tre",ios::app | ios::binary);

Student std;
std.setRollNumber(rollNumber);
std.setName(name.c_str( ));
std.setGender(gender);

f.write((char *)&std,sizeof(std));

f.close();
cout<<"Student added successFully"<<endl;

}

void displayList( )
{
Student std;
ifstream k("version3.tre");
if(k.fail( ))
{
cout<<"No friend added"<<endl;
return;
}

while(1)
{

k.read((char *)&std,sizeof(std));
if(k.fail( ))break;
char name[21];
std.getName(name);
cout<<"Roll_Number: "<<std.getRollNumber( )<<",Name- "<<name<<", Gender- "<<std.getGender( )<<endl;
}

k.close( );
return;
}




int main( )
{
int ch;
while(1)
{
cout<<"1->Add student"<<endl;
cout<<"2->Display list of student"<<endl;
cout<<"3->Exit"<<endl;
cout<<"Enter your choice: ";
cin>>ch;
if(ch==1)addStudent( );
else if(ch==2)displayList( );
else if(ch==3)break;
else cout<<"Invalid choice"<<endl;
}
return 0;
}