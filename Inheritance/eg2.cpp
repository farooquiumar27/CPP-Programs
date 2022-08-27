#include<iostream>
using namespace std;

class rectangle
{
 private:
  int length;
  int breath;
 public:
  void setLength(int e)
  {
  if(e)length=e;
  else length=0;
  }
  void setBreath(int e)
  {
    if(e)breath=e;
    else breath=0;
  }
  int getLength( )
  {
    return length;
  }
  int getBreath( )
  {
    return breath;
  }
};

class Box:private rectangle
{
 private:
  int height;
 public:
  void setHeight(int e)
  {
    if(e)height=e;
    else height=0;
  }
  int getHeight( )
  {
    return height;
  }
};

//In this example, derived class the public section of base become the private section of derived class 

int main( )
{
  Box b;
  //int l,br;
  int h;
  //b.setLength(5);
  //b.setBreath(9);
  b.setHeight(4);
  //l=b.getLength( );
  //br=b.getBreath( );
  h=b.getHeight( );
  //cout<<"Box length : "<<l<<endl;
  //cout<<"Box breath : "<<br<<endl;
  cout<<"Box height : "<<h<<endl;
  return 0;
}