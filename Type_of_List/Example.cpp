#include<iostream>
using namespace std;
class aaa
{
public:
aaa( )
{
cout<<"Default constructor of class aaa"<<endl;
}
aaa(const aaa &other)
{
cout<<"Copy constructor of class aaa"<<endl;
}
};
class bbb : public aaa
{
public:
bbb( )
{
cout<<"Default constructor of class bbb"<<endl;
}
bbb(const bbb &other)
{
cout<<"Copy constructor of class bbb"<<endl;
}
bbb(const aaa &other)
{
cout<<"Parameterized constructor of class bbb with parameter as aaa &"<<endl;
}
bbb & operator=(const bbb &other)
{
cout<<"Operator = function for class bbb with parameter as bbb &"<<endl;
}
bbb & operator=(const aaa &other)
{
cout<<"Operator = function for class bbb with parameter as aaa &"<<endl;
}
bbb & operator+=(const bbb &other)
{
cout<<"Operator += function for class bbb with parameter as bbb &"<<endl;
}
bbb & operator+=(const aaa &other)
{
cout<<"Operator += function for class bbb with parameter as aaa &"<<endl;
}
};
class ccc : public aaa
{
public:
ccc( )
{
cout<<"Default constructor of class ccc"<<endl;
}
ccc(const ccc &other)
{
cout<<"Copy  constructor of class ccc"<<endl;
}
ccc(const aaa &other)
{
cout<<"Parameterized constructor of class ccc with parameter as aaa &"<<endl;
}
ccc & operator=(const ccc &other)
{
cout<<"Operator = function for class ccc with parameter as ccc &"<<endl;
}
ccc & operator=(const aaa &other)
{
cout<<"Operator = function for class ccc with parameter as aaa &"<<endl;
}
ccc & operator+=(const ccc &other)
{
cout<<"Operator += function for class ccc with parameter as ccc &"<<endl;
}
ccc & operator+=(const aaa &other)
{
cout<<"Operator += function for class ccc with parameter as aaa &"<<endl;
}
};