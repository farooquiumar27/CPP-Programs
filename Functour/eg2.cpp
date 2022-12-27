#include<iostream>
#include<map>
#include<utility>
using namespace std;

class Object
{
int arr[10];
public:
Object( )
{
for(int i=0;i<10;i++)arr[i]=i*i;
}
};

int main( )
{
Object o1;
string *s2,*s1=new string("James_Bond");
map<string*,Object *> m1;
m1.insert(pair<string*,Object*>(s1,&o1));
map<string*,Object*>::iterator i=m1.begin( );
s2=new string("James_Bond");
i=m1.find(s2);
if(i==m1.end())
{
cout<<"Not Found"<<endl;
}
else
{
cout<<"Found"<<endl;
}
return 0;
}