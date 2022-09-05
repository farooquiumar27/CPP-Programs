#include<stdio.h>
class Monitor
{
public:
void operator<<(int e)
{
printf("%d",e);
}
void operator<<(const char *e)
{
printf("%s",e);
}
void operator<<(char a)
{
printf("%c",a);
}
};
namespace thinkingmachine
{
Monitor mout;
}
using namespace thinkingmachine;
int main( )
{
mout<<10;
mout<<'A';
mout<<"GAME";
return 0;
}