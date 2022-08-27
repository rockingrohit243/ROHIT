#include<stdio.h>

int main()
{
int number,i,result;
printf("Enter a number \n");
scanf("%d",&number);
for(i=1;i<=3;i++)
 {
result=number*i;
printf("%d ",result);
}
    return 0;
}