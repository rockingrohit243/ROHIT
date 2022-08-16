//
#include<stdio.h>
int main()
{
int x,n,rem,arm=0;
for(n=1;n<=1000;n++)
{
arm=0;
x=n;
while(x!=0)
{
rem=x%10;
arm=arm+rem*rem*rem;
x=x/10;
}
if(arm==n)
{
printf("%d\n",n);
}
}

return 0;
}
