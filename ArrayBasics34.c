#include<stdio.h>
int main()
{
int arr[100],size,sum=0,result,i;
printf("enter the array size");
scanf("%d",&size);
printf("enter the array elements\n");//input the value
for(i=0;i<size;i++)
{
scanf("%d",&arr[i]);
}
for(i=0;i<size;i++)//find the sum
{
sum=sum+arr[i];
}
printf("The output is: ");
for(i=0;i<size;i++)
{

sum=sum-arr[i];
arr[i]=sum;
printf("%d\n",arr[i]);
}
return 0;

}