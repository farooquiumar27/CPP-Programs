#include<iostream>
using namespace std;
template<class T1,class T2>
class aaa
{
private:
T1 x,y;
T2 z;
public:
void setX(T1 x);
void setY(T1 y);
void setZ(T2 z);
T1 getX( );
T1 getY( );
T2 getZ( );
};
template<class T1,class T2>
void aaa<T1,T2>::setX(T1 x)
{
this->x=x;
}
template<class T1,class T2>
void aaa<T1,T2>::setY(T1 y)
{
this->y=y;
}
template<class T1,class T2>
void aaa<T1,T2>::setZ(T2 z)
{
this->z=z;
}
template<class T1,class T2>
T1 aaa<T1,T2>::getX( )
{
return this->x;
}
template<class T1,class T2>
T1 aaa<T1,T2>::getY( )
{
return this->y;
}
template<class T1,class T2>
T2 aaa<T1,T2>::getZ( )
{
return this->z;
}
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