#include<iostream>
#include<utility>
#include<map>
using namespace std;
int main( )
{
map<int,int> m;
m.insert(pair<int,int>(101,4030));
m.insert(pair<int,int>(102,30));
m.insert(pair<int,int>(103,650));
m.insert(pair<int,int>(104,923));
int roll;
cout<<"Enter rollNumber of student to search: ";
cin>>roll;
map<int,int>::iterator i;
i=m.find(roll);
if(i==m.end())cout<<"No student added with roll number : "<<roll<<endl;
else cout<<"Code of student with roll number: "<<i->second<<endl;
return 0;
}