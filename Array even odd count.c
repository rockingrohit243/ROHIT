#include<stdio.h>

int main()
{
   int arr[100],i,size,sum=0,evenCount=0,oddCount=0;
printf("enter array elements size");
scanf("%d",&size);
printf("Enter elements");
for(i=0;i<size;i++)
{ scanf("%d",&arr[i]);
}
printf("\nThe elements are:");
for(i=0;i<size;i++)
{
printf("%d",arr[i]);
}
for(i=0;i<size;i++)
{
if(arr[i]%2==0)
{evenCount++;
}
else
{
oddCount++;
}
}


printf("\nThe even number is=%d",evenCount);
printf("\nThe odd number is=%d",oddCount);
    return 0;
}