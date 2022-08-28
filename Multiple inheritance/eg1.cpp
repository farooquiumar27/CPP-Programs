#include<iostream>
#include<string.h>
using namespace std;
class Person
{
private:
char name[22];
public:
void setName(const char *e)
{
strcpy(name,e);
}
void getName(char *e)
{
strcpy(e,name);
}
};
class Employ
{
private:
int salary;
int id;
public:
void setSalary(int e)
{
salary=e;
}
void setID(int e)
{
id=e;
}
int getSalary( )
{
return salary;
}
int getID( )
{
return id;
}
};
class Doctor : public Person,public Employ
{
private:
char type[32];
public:
void setType(const char *e)
{
strcpy(type,e);
}
void getType(char *e)
{
strcpy(e,type);
}
};

int main()
{
Doctor d;
char type[32],name[22];
int salary;
d.setName("Dr.Strange");
d.setSalary(100000);
d.setType("MUC");
d.getName(name);
d.getType(type);
salary=d.getSalary();
cout<<"Doctor details..."<<endl;
cout<<"Name-"<<name<<endl;
cout<<"Type-"<<type<<endl;
cout<<"Salary-"<<salary<<endl;
return 0;
}