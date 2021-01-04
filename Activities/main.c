#include<stdio.h>
int main()
{
int a=18, b=72, d;

d = (a > b)? a : b;
while(1)
{
if(d % a == 0 && d % b == 0)
{
printf("%d\n", d);
break;
}
++d;
}
return 0;
}
