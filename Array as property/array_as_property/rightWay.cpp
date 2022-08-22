#include<iostream>
#include<string.h>
using namespace std;

class Book
{
private:
char title[32];
public:
void setTitle(const char *p)
{
if(strlen(p)>32) title[0]='\0';
else strcpy(title,p);
}
void getTitle(char *t)
{
strcpy(t,title);
}
};
int main( )
{
char t[32];
Book b;
b.setTitle("SpiderMan");
b.getTitle(t);
cout<<"Title is "<<t<<endl;
return 0;
}