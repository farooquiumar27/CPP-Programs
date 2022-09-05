#include<stdio.h>
class Monitor
{
public:
Monitor & operator<<(int e)
{
printf("%d",e);
}
Monitor & operator<<(const char *e)
{
printf("%s",e);
}
Monitor & operator<<(char a)
{
printf("%c",a);
}
Monitor & operator<<(void(*p)( ))
{
p( );
return *this;
}
};
namespace thinkingmachine
{
Monitor mout;
void newline( )
{
printf("\n");
}
}
using namespace thinkingmachine;
int main( )
{
mout<<10<<newline;
mout<<'A'<<newline;
mout<<"Its time to play GAME!!"<<newline;
return 0;
}