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

bool MyComparator(Student *left,Student *right)
{
return left->getRollNumber( ) < right->getRollNumber( );
}

class Course
{
private:
int code;
string title;
public:
Course( )
{
this->code=0;
this->title="";
}
Course(int code,string title)
{
this->code=code;
this->title=title;
}
void setCode(int code)
{
this->code=code;
}
int getCode( )
{
return this->code;
}
void setTitle(string title)
{
this->title=title;
}
string getTitle( )
{
return this->title;
}
};
int main( )
{
Student s1(101,"Sameer");
Student s2(102,"Lokesh");
Student s3(103,"Mahesh");
Student s4(104,"Rakesh");
Student s5(105,"Roger");

Course c1(101,"C++");
Course c2(102,"Python");
Course c3(103,"Java");

map<int,Student *> m;
m.insert(pair<int,Student *>(101,&s1));
m.insert(pair<int,Student *>(102,&s2));
m.insert(pair<int,Student *>(103,&s3));
m.insert(pair<int,Student *>(104,&s4));
m.insert(pair<int,Student *>(105,&s5));

map<Student *,Course *,bool(*)(Student*,Student*)> c(MyComparator);
c.insert(pair<Student *,Course *>(&s1,&c1));
c.insert(pair<Student *,Course *>(&s2,&c2));
c.insert(pair<Student *,Course *>(&s3,&c1));
c.insert(pair<Student *,Course *>(&s4,&c3));

int roll;
Student *s;
cout<<"Enter rollNumber of student to search: ";
cin>>roll;
map<int,Student *>::iterator i;
i=m.find(roll);
if(i==m.end())
{
cout<<"No student added with roll number : "<<roll<<endl;
return 0;
}

map<Student *,Course *>::iterator ci;
//s=i->second;
s=new Student;
s->setRollNumber(102);
s->setName("Lokesh");

Course *cc;
ci=c.find(s);
cc=ci->second;
if(ci==c.end( ))
{
cout<<s->getName( )<<" is not registered with any course"<<endl;
return 0;
}
cout<<"Student with roll number: "<<s->getRollNumber( )<<" and name - "<<s->getName( )<<" is attached in this course "<<cc->getTitle( )<<endl;
return 0;
}