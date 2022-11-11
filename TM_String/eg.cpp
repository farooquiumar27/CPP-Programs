#include<iostream>
#include<string.h>
using namespace std;
class TM_String
{
private:
int size;
char *ptr;
public:
TM_String( );
TM_String(const char *ptr);
TM_String(const TM_String &other);
TM_String & operator=(const TM_String &other);
TM_String & operator=(const char *ptr);
friend ostream & operator<<(ostream &out,TM_String &tm);

};

TM_String::TM_String( )
{
this->size=0;
this->ptr=NULL;
}

TM_String::TM_String(const char *ptr)
{
this->size=0;
this->ptr=NULL;
if(ptr==NULL)return;
this->size=strlen(ptr);
this->ptr=new char[this->size+1];
strcpy(this->ptr,ptr);
}

TM_String::TM_String(const TM_String &other)
{
this->ptr=NULL;
this->size=0;
if(other.ptr==NULL)return;
this->size=strlen(other.ptr);
this->ptr=new char[this->size+1];
strcpy(this->ptr,other.ptr);
}

TM_String & TM_String::operator=(const TM_String &other)
{
if(this->ptr)this->ptr=NULL;
this->size=0;
if(other.ptr==NULL)return *this;
this->size=strlen(other.ptr);
this->ptr=new char[this->size+1];
strcpy(this->ptr,other.ptr);
return *this;
}

TM_String & TM_String::operator=(const char *ptr)
{
if(this->ptr)this->ptr=NULL;
this->size=0;
if(ptr==NULL)return *this;
this->size=strlen(ptr);
this->ptr=new char[this->size+1];
strcpy(this->ptr,ptr);
return *this;
}

ostream & operator<<(ostream &out,TM_String &tm)
{
if(tm.ptr==NULL)return out;
out<<tm.ptr;
return out;
}

int main( )
{
TM_String string1;
string1="Its time to play the GAME!!";
cout<<string1<<endl;
TM_String string2("asdfg;lkh");
cout<<string2<<endl;
TM_String string3(string2);
cout<<string3<<endl;
return 0;
}