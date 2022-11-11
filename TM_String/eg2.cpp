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

int operator<(const TM_String &other);
int operator<=(const TM_String &other);
int operator>(const TM_String &other);
int operator>=(const TM_String &other);
int operator==(const TM_String &other);
int operator!=(const TM_String &other);
void operator+=(const TM_String &other);
TM_String operator+(const TM_String &other);

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

int TM_String::operator<(const TM_String &other)
{
if(this->ptr==NULL&&other.ptr==NULL)return 0;
if(this->ptr==NULL)return 1;
if(other.ptr==NULL)return 0;
return strcmp(this->ptr,other.ptr)<0;
}

int TM_String::operator<=(const TM_String &other)
{
if(this->ptr==NULL&&other.ptr==NULL)return 1;
if(this->ptr==NULL)return 1;
if(other.ptr==NULL)return 0;
return strcmp(this->ptr,other.ptr)<=0;
}

int TM_String::operator>(const TM_String &other)
{
if(this->ptr==NULL&&other.ptr==NULL)return 0;
if(this->ptr==NULL)return 0;
if(other.ptr==NULL)return 1;
return strcmp(this->ptr,other.ptr)>0;
}

int TM_String::operator>=(const TM_String &other)
{
if(this->ptr==NULL&&other.ptr==NULL)return 1;
if(this->ptr==NULL)return 0;
if(other.ptr==NULL)return 1;
return strcmp(this->ptr,other.ptr)>=0;
}

int TM_String::operator==(const TM_String &other)
{
if(this->ptr==NULL&&other.ptr==NULL)return 1;
if(this->ptr==NULL)return 0;
if(other.ptr==NULL)return 0;
return strcmp(this->ptr,other.ptr)==0;
}

int TM_String::operator!=(const TM_String &other)
{
if(this->ptr==NULL&&other.ptr==NULL)return 0;
if(this->ptr==NULL)return 1;
if(other.ptr==NULL)return 1;
return strcmp(this->ptr,other.ptr)!=0;
}

void TM_String::operator+=(const TM_String &other)
{
if(this->ptr==NULL&&other.ptr==NULL)return;
if(other.ptr==NULL)return;
if(this->ptr==NULL)
{
*this=other;
return;
}
char *temp=new char[this->size+other.size+1];
strcpy(temp,this->ptr);
strcat(temp,other.ptr);
delete [ ] this->ptr;
this->ptr=temp;
this->size=this->size+other.size;
}

TM_String TM_String::operator+(const TM_String &other)
{
TM_String k;
if(this->ptr==NULL&&other.ptr==NULL)return k;
if(other.ptr==NULL)k=*this;
else if(this->ptr==NULL)k=other;
else
{
k=*this;
k+=other;
}
return k;
}


int main( )
{
TM_String str[10];
str[0]="Zaheer";
str[1]="Sayed";
str[2]="Basid";
str[3]="Javed";
str[4]="Sahil";
str[5]="Richard";
str[6]="HHH";
str[7]="David";
str[8]="Asif";
str[9]="Shaheen";
TM_String g;

int e,f,m;
m=8;
while(m>=0)
{
e=0;
f=1;
while(e<=m)
{
if(str[e]>str[f])
{
g=str[e];
str[e]=str[f];
str[f]=g;
}
e++;
f++;
}
m--;
}


for(int x=0;x<10;x++)cout<<str[x]<<endl;

return 0;
}