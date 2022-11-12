#include<iostream>
using namespace std;

int main( )
{
string a,b;
a="James_Bond";
b="(OO7)";
a.replace(2,3,b);
cout<<a<<endl;
return 0;
}