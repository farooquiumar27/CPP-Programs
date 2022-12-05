#include<iostream>
#include<fstream>
using namespace std;
int main( )
{
ofstream k("info.data",ios::app);
k<<"great";
k.close( );
return 0;
}