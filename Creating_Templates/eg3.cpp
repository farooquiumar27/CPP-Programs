#include<iostream>
using namespace std;
template<class T1,class T2>
class aaa
{
private:
T1 x,y;
T2 z;
public:
void setX(T1 x)
{
this->x=x;
}
void setY(T1 y)
{
this->y=y;
}
void setZ(T2 z)
{
this->z=z;
}
T1 getX( )
{
return this->x;
}
T1 getY( )
{
return this->y;
}
T2 getZ( )
{
return this->z;
}
};
int main( )
{
aaa<int,char> a;
a.setX(10);
a.setY(20);
a.setZ('A');
cout<<"X of (a) "<<a.getX( );
cout<<"Y of (a) "<<a.getY( );
cout<<"Z of (a) "<<a.getZ( )<<endl;
aaa<char,float> aa;
aa.setX('Z');
aa.setY('Y');
aa.setZ(10.35f);
cout<<"X of (aa) "<<aa.getX( );
cout<<"Y of (aa) "<<aa.getY( );
cout<<"Z of (aa) "<<aa.getZ( )<<endl;
return 0;
}