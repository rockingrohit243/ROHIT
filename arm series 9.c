//
#include<stdio.h>
int main()
{
int x,n,rem,arm=0,i;
for(i=1;i<=1000;i++)
{
arm=0;
n=i;
while(n!=0)
{
rem=n%10;
arm=arm+rem*rem*rem;
n=n/10;
}
if(arm==i)
{
printf("%d\n",i);
}
}

return 0;
}
