#include<stdio.h>
int main()
{
int i,j,k,n;
printf("Enter the size\n ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
for(j=0;j<n-i;j++)
{
printf(" ");
}
for(k=0;k<i;k++)
{
printf("%d",i);
}
printf("\n");
}
return 0;
}