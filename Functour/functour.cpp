#include<iostream>
#include<map>
using namespace std;

class Object
{
private:
int arr[10];
public:
Object( )
{
for(int i=0;i<10;i++)arr[i]=i*i;
}
};

class MyComparator
{
public:
int operator( )(string *left,string *right)
{
return *left<*right;
}
};

int main( )
{
map<string*,Object*,MyComparator> m1;
string *s1,*s2=new string("James_Bond");
Object o1;
m1.insert(pair<string*,Object*>(s2,&o1));
map<string*,Object*>::iterator i;
s2=new string("James_Bond");
i=m1.find(s2);
if(i==m1.end( ))
{
cout<<"Not found"<<endl;
}
else
{
cout<<"Found"<<endl;
}
return 0;
}