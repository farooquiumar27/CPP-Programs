#include<stdio.h>
class Monitor
{
public:
Monitor & operator<<(int e)
{
printf("%d",e);
return *this;
}
Monitor & operator<<(const char *e)
{
printf("%s",e);
return *this;
}
Monitor & operator<<(char a)
{
printf("%c",a);
return *this;
}
};
namespace thinkingmachine
{
Monitor mout;
}
using namespace thinkingmachine;
int main( )
{
mout<<10<<'A'<<"GAME";
return 0;
}