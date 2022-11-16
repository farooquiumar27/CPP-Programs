#include<iostream>
#include<utility>
#include<map>
using namespace std;

class Student
{
private:
string name;
int rollNumber;
public:
Student( )
{
this->name="";
this->rollNumber=0;
}
Student(int rollNumber,string name)
{
this->rollNumber=rollNumber;
this->name=name;
}
void setRollNumber(int rollNumber)
{
this->rollNumber=rollNumber;
}
int getRollNumber( )
{
return this->rollNumber;
}
void setName(string name)
{
this->name=name;
}
string getName( )
{
return this->name;
}
};


int main( )
{
Student s1(101,"Sameer");
Student s2(102,"Lokesh");
Student s3(103,"Mahesh");
Student s4(104,"Rakesh");

map<int,Student *> m;
m.insert(pair<int,Student *>(101,&s1));
m.insert(pair<int,Student *>(102,&s2));
m.insert(pair<int,Student *>(103,&s3));
m.insert(pair<int,Student *>(104,&s4));
int roll;
Student *s;
cout<<"Enter rollNumber of student to search: ";
cin>>roll;
map<int,Student *>::iterator i;
i=m.find(roll);
if(i==m.end())cout<<"No student added with roll number : "<<roll<<endl;
else 
{
s=i->second;
cout<<"Code of student with roll number: "<<s->getRollNumber( )<<" and name - "<<s->getName( )<<endl;
}
return 0;
}