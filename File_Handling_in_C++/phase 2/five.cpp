#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main( )
{
string str;
ifstream k("info.data");
k>>str;
k.close( );
cout<<str<<endl;
return 0;
}