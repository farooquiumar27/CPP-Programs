#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int isLeapYear(int y)
{
if(y%400==0)return 1;
else if(y%100==0)return 0;
else if(y%4==0)return 1;
else return 0;
}

void isValidDate(char *dateString,int *isValid,int *d,int *m,int *y)
{
if(dateString==NULL)return;//
*isValid=0;
int dd,mm,yy,i,r;
int sepIndex1,sepIndex2;
char sep;
int mth[12]={31,28,31,30,31,30,31,31,30,31,30,31};
int x=strlen(dateString);
if(x<8||x>10)return;//
if(!(dateString[1]=='/'||dateString[1]=='-'||dateString[2]=='/'||dateString[2]=='-'))return; //
if(dateString[1]=='/'||dateString[1]=='-')sepIndex1=1;
else sepIndex1=2;
sep=dateString[sepIndex1];
if(dateString[0]<47||dateString[0]>57)return; //
if(sepIndex1==2)if(dateString[1]<47||dateString[1]>57)return; //
if(sepIndex1==1)dd=dateString[0]-48;
else dd=(dateString[0]-48)*10+(dateString[1]-48);
if(dd==0)return; //

i=sepIndex1+1;
if(!(dateString[i+1]==sep||dateString[i+2]==sep))return; //
if(dateString[i+1]==sep)sepIndex2=i+1;
else sepIndex2=i+2;
if(dateString[i]<48||dateString[i]>57)return; //
if(sepIndex2==i+2)if(dateString[i+1]<48||dateString[i+1]>57)return;
if(sepIndex2==i+1)mm=dateString[i]-48;
else mm=(dateString[i]-48)*10+(dateString[i+1]-48);
if(mm<1||mm>12)return; //

i=sepIndex2+1;
yy=0;
r=0;
while(r<=3)
{
if(dateString[i+r]<48||dateString[i+r]>57)return; //
yy=(yy*10)+dateString[i+r]-48;
r++;
}
if(yy<1901)return; //
if(isLeapYear(yy))mth[1]=29;
if(dd<1||dd>mth[mm-1])return; //
//printf("%d\n",dd);
//printf("%d\n",mth[mm-1]);

*d=dd;
*m=mm;
*y=yy;
*isValid=1;
return;
}

int main( )
{
int d,m,y;
int isValid;
char dateString[51];
printf("Enter date : ");
scanf("%s",dateString);
isValidDate(dateString,&isValid,&d,&m,&y);
if(isValid)
{
printf("Valid : %d_%d_%d\n",d,m,y);
}
else
{
printf("Not Valid\n");
}
return 0;
}
