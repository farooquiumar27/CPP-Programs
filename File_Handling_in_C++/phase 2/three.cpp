#include<iostream>
#include<fstream>
using namespace std;
int main( )
{
ofstream k("info.data",ios::out);
k<<"great";
k.close( );
return 0;
}