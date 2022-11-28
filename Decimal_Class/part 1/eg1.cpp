#include<iostream>
#include<string.h>
#include<stack>
using namespace std;

int toDigit(char g)
{
return g-48;
}

char toChar(int g)
{
return g+48;
}

int main( )
{
char a[21],b[21],c[24];
cout<<"Enter the first number: ";
cin>>a;
cout<<"Enter the second number: ";
cin>>b;
int al,bl;
int carry=0;
stack<int> stk;
int left,right,sum,m; 	
al=strlen(a)-1;
bl=strlen(b)-1;
while(al>=0 && bl>=0)
{
left=toDigit(a[al]);
right=toDigit(b[bl]);
sum=left+right+carry;
m=sum%10;
carry=sum/10;
stk.push(m);
al--;
bl--;
}

while(al>=0)
{
left=toDigit(a[al]);
sum=left+carry;
m=sum%10;
carry=sum/10;
stk.push(m);
al--;
}

while(bl>=0)
{
right=toDigit(b[bl]);
sum=right+carry;
m=sum%10;
carry=sum/10;
stk.push(m);
bl--;
}

if(carry>0)stk.push(carry);

int it=0;
while(!stk.empty())
{
c[it]=toChar(stk.top());
stk.pop( );
it++;
}
c[it]='\0';
cout<<c<<endl;
return 0;
}