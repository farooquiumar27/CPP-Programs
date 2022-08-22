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
char* getTitle( )
{
return title;
} 
};
int main( )
{
Book b;
b.setTitle("SpiderMan");
cout<<"Title is "<<b.getTitle( )<<endl;
return 0;
}