#include<iostream>
#include<string.h>
#include<stdio.h>
#include<time.h>
using namespace std;
class TMDate
{
private:
int day;
int month;
int year;
int dayNumber;
void toDayNumber( );
int fromDayNumber( );

public:

TMDate( );
TMDate(const TMDate &other);
TMDate & operator=(const TMDate &other);
TMDate(const char *dateString);
TMDate & operator=(const char *dateString);
virtual ~TMDate( );

int getDay( );
int getMonth( );
int getYear( );
int isLeapYear(int);
void operator+=(int);
void operator-=(int);
void isValidDate(const char *dateString,int *isValid,int *d,int *m,int *y);

int getDayOfWeek( );
void getMonthString(char *monthString);
void getMonthShortString(char *monthShortString);
void getWeekString(char *weekString);
void getWeekShortString(char *weekShortString);

int operator<(const TMDate &other);
int operator>(const TMDate &other);
int operator<=(const TMDate &other);
int operator>=(const TMDate &other);
int operator==(const TMDate &other);
int operator!=(const TMDate &other);
TMDate operator+(int);
TMDate operator-(int);

};

TMDate::TMDate( )
{
time_t x;
time(&x);
struct tm *now;
now=localtime(&x);
day=now->tm_mday;
month=now->tm_mon+1;
year=now->tm_year+1900;
this->toDayNumber( );
}

TMDate::TMDate(const char *dateString)
{
int d,m,y;
int isValid;
isValidDate(dateString,&isValid,&d,&m,&y);
if(isValid)
{
this->day=d;
this->month=m;
this->year=y;

}
else
{
printf("Not Valid\n");
}
}

TMDate & TMDate::operator=(const char *dateString)
{
int d,m,y;
int isValid;
isValidDate(dateString,&isValid,&d,&m,&y);
if(isValid)
{
this->day=d;
this->month=m;
this->year=y;

}
else
{
printf("Not Valid\n");
}
}

TMDate::TMDate(const TMDate &other)
{
this->day=other.day;
this->dayNumber=other.dayNumber;
this->year=other.year;
this->month=other.month;
}

TMDate & TMDate::operator=(const TMDate &other)
{
this->day=other.day;
this->dayNumber=other.dayNumber;
this->year=other.year;
this->month=other.month;
return *this;
}

int TMDate::getDay( )
{
return this->day;
}

int TMDate::getMonth( )
{
return this->month;
}

int TMDate::getYear( )
{
return this->year;
}

int TMDate::getDayOfWeek( )
{
if(this->dayNumber==0)return 0;
int leftDays=this->dayNumber%7;
int dow=leftDays+2;
if(dow>7)dow=dow%7;
return dow;
}

void TMDate::getWeekString(char *weekString)
{
if(this->dayNumber==0)
{
weekString='\0';
return;
}
int dow=getDayOfWeek( );
if(dow==1)strcpy(weekString,"Sunday");
else if(dow==2)strcpy(weekString,"Monday");
else if(dow==3)strcpy(weekString,"Tuesday");
else if(dow==4)strcpy(weekString,"Wednesday");
else if(dow==5)strcpy(weekString,"Thusday");
else if(dow==6)strcpy(weekString,"Friday");
else if(dow==7)strcpy(weekString,"Satarday");
}

void TMDate::getWeekShortString(char *weekShortString)
{
if(this->dayNumber==0)
{
*weekShortString='\0';
return;
}
int dow=getDayOfWeek( );
if(dow==1)strcpy(weekShortString,"Sun");
else if(dow==2)strcpy(weekShortString,"Mon");
else if(dow==3)strcpy(weekShortString,"Tues");
else if(dow==4)strcpy(weekShortString,"Wed");
else if(dow==5)strcpy(weekShortString,"Thus");
else if(dow==6)strcpy(weekShortString,"Fri");
else if(dow==7)strcpy(weekShortString,"Sat");
}

void TMDate::getMonthString(char *monthString)
{
if(this->dayNumber==0)
{
*monthString='\0';
return;
}
if(this->month==1)strcpy(monthString,"January");
if(this->month==2)strcpy(monthString,"February");
if(this->month==3)strcpy(monthString,"March");
if(this->month==4)strcpy(monthString,"April");
if(this->month==5)strcpy(monthString,"May");
if(this->month==6)strcpy(monthString,"June");
if(this->month==7)strcpy(monthString,"July");
if(this->month==8)strcpy(monthString,"Augest");
if(this->month==9)strcpy(monthString,"September");
if(this->month==10)strcpy(monthString,"October");
if(this->month==11)strcpy(monthString,"November");
if(this->month==12)strcpy(monthString,"December");

}

void TMDate::getMonthShortString(char *monthShortString)
{
if(this->dayNumber==0)
{
*monthShortString='\0';
return;
}
if(this->month==1)strcpy(monthShortString,"Jan");
if(this->month==2)strcpy(monthShortString,"Feb");
if(this->month==3)strcpy(monthShortString,"Mar");
if(this->month==4)strcpy(monthShortString,"Apr");
if(this->month==5)strcpy(monthShortString,"May");
if(this->month==6)strcpy(monthShortString,"Jun");
if(this->month==7)strcpy(monthShortString,"Jul");
if(this->month==8)strcpy(monthShortString,"Aug");
if(this->month==9)strcpy(monthShortString,"Sept");
if(this->month==10)strcpy(monthShortString,"Oct");
if(this->month==11)strcpy(monthShortString,"Nov");
if(this->month==12)strcpy(monthShortString,"Dec");

}


int TMDate::isLeapYear(int y)
{
if(y%400==0)return 1;
else if(y%100==0)return 0;
else if(y%4==0)return 1;
else return 0;
}

void TMDate::toDayNumber( )
{
int x=0;
int y=1901;
while(y<this->getYear( ))
{
if(isLeapYear(y))x=x+366;
else x=x+365;
y++;
}

int mth[12]={31,28,31,30,31,30,31,31,30,31,30,31};
if(isLeapYear(y))mth[1]=29;
int m=0;
int g=this->getMonth( )-1;
while(m<g)
{
x=x+mth[m];
m++;
}
x=x+this->getDay( );
dayNumber=x;
}

void TMDate::isValidDate(const char *dateString,int *isValid,int *d,int *m,int *y)
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

*d=dd;
*m=mm;
*y=yy;
*isValid=1;
return;
}

int TMDate::fromDayNumber( )
{
int x=dayNumber;
int d,m,y;
y=1901;
while(1)
{
if(isLeapYear(y))x=x-366;
else x=x-365;
y++;
if(isLeapYear(y))
{
if(x<=366)break;
}
else if(x<=365)break;
}
int mth[12]={31,28,31,30,31,30,31,31,30,31,30,31};
if(isLeapYear(y))mth[1]=29;
m=0;
while(1)
{
x=x-mth[m];
m++;
if(x<=mth[m])break;
}
m++;
d=x;
this->day=d;
this->month=m;
this->year=y;
}

void TMDate::operator+=(int days)
{
if(this->dayNumber==0)return;
this->dayNumber=dayNumber+days;
this->fromDayNumber( );
}

void TMDate::operator-=(int days)
{
if(this->dayNumber==0)return;
this->dayNumber=dayNumber-days;
this->fromDayNumber( );
}

TMDate TMDate::operator+(int days)
{
if(this->dayNumber==0)return TMDate("00/00/0000");
TMDate date;
date.dayNumber=this->dayNumber+days;
date.fromDayNumber( );
return date;
}

TMDate TMDate::operator-(int days)
{
if(this->dayNumber==0)return TMDate("00/00/0000");
TMDate date;
date.dayNumber=this->dayNumber-days;
date.fromDayNumber( );
return date;
}

int TMDate::operator<(const TMDate &other)
{
return this->dayNumber<other.dayNumber;
}

int TMDate::operator>(const TMDate &other)
{
return this->dayNumber>other.dayNumber;
}

int TMDate::operator<=(const TMDate &other)
{
return this->dayNumber<=other.dayNumber;
}

int TMDate::operator>=(const TMDate &other)
{
return this->dayNumber>=other.dayNumber;
}

int TMDate::operator==(const TMDate &other)
{
return this->dayNumber==other.dayNumber;
}

int TMDate::operator!=(const TMDate &other)
{
return this->dayNumber!=other.dayNumber;
}

TMDate::~TMDate( )
{
//do nothing
}

ostream & operator<<(ostream &oo,TMDate &date)
{
oo<<date.getDay( )<<"/"<<date.getMonth( )<<"/"<<date.getYear( )<<endl;
return oo;
}
int main( )
{
TMDate date;
cout<<date<<endl;
return 0;
}