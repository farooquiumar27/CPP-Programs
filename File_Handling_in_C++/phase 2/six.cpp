#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main( )
{
string str;
fstream k("info.data",ios::out | ios::in | ios::app);
k<<"Cool";
k.close( );
return 0;
}