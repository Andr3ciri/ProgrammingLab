#include <stdio.h>
int potenza2(int i)
{
int j;
for(j=1;j<i;j)
{
    j*=2;
}
if(j==i)
{
    return 1;
}
return 0;
}
