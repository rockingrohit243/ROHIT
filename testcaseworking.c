#include<stdio.h>
int main()
{ int num,temp,count=0,first,second,i,temproot,j;
printf("Enter the number: ");
scanf("%d",&num);
temp=num;
while(num!=0)
{
num=num/10;
count++;
}
temproot=temp;
for(i=0;i<count-2;i++)
{
temp=temp/10;
}
first=temp/10;
second=temp%10;
int sum=first+second;

/*for(i=0;i<count-2;i++)
{
temproot=temproot/10;
if(temproot==sum)
printf("1");
}*/
   // printf("Hello world!=%d",sum);
    return 0;
}