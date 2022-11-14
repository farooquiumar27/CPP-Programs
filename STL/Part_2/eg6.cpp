#include<iostream>
#include<forward_list>
using namespace std;

class Student
{
private:
int rollNumber;
string name;
public:
Student( )
{
this->rollNumber=0;
this->name="";
}
Student(int rollNumber,string name)
{
this->rollNumber=rollNumber;
this->name=name;
}
Student(const Student &other)
{
this->rollNumber=rollNumber;
this->name=other.name;
}
Student & operator=(const Student &other)
{
this->rollNumber=other.rollNumber;
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

class StudentRoll_NumberComparator
{
public:
bool operator( )(Student *left,Student *right)
{
return left->getRollNumber( )<right->getRollNumber( );
}
};

class StudentNameComparator
{
public:
bool operator( )(Student *left,Student *right)
{
return left->getName( )<right->getName( );
}
};

int main( )
{
forward_list<Student*> list;
forward_list<Student*>::iterator i;
i=list.before_begin( );
i=list.insert_after(i,new Student(100,"Babar"));
i=list.insert_after(i,new Student(104,"Zack"));
i=list.insert_after(i,new Student(007,"James_Bond"));
i=list.insert_after(i,new Student(550,"Hunt"));
i=list.insert_after(i,new Student(420,"Modi"));
i=list.insert_after(i,new Student(41,"Rongj"));
Student *s;
StudentRoll_NumberComparator s1;
StudentNameComparator s2;
cout<<"Sorting by Roll_Number"<<endl;
list.sort(s1);
for(i=list.begin( );i!=list.end( );++i)
{
s=*i;
cout<<s->getRollNumber( )<<","<<s->getName( )<<endl;
}
cout<<"Sorting by Name"<<endl;
list.sort(s2);
for(i=list.begin( );i!=list.end( );++i)
{
s=*i;
cout<<s->getRollNumber( )<<","<<s->getName( )<<endl;
}
return 0;
}