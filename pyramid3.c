#include<stdio.h>
int main()
{
int i,j,k,n;
printf("Enter the size\n ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
for(k=0;k<i;k++)
{
printf("*");
}
printf("\n");
}
return 0;
}