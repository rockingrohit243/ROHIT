#include<stdio.h>

int main()
{
   int arr[100],i,sum=0,size;
printf("enter size");
scanf("%d",&size);
printf("elements ");
for(i=0;i<size;i++)
{ scanf("%d",&arr[i]);

}
printf(" Reverse order");
for(i=size-1;i>=0;i--)
{printf("%d",arr[i]);  
}
return 0;
}