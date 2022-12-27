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

int main( )
{
map<string,Object *> m1;
string s1("James_Bond");
Object o1;
m1.insert(pair<string,Object *>(s1,&o1));
return 0;
}