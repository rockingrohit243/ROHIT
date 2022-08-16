#include<stdio.h>

int main()
{
    int arr[100],i,min,max,size,sum=0,evenCount=0,oddCount=0;
    printf("enter array elements size");
    scanf("%d",&size);
    printf("Enter elements");
    for(i=0; i<size; i++)
    {   scanf("%d",&arr[i]);
    }
    printf("\nThe elements are:");
    for(i=0; i<size; i++)
    {
        printf("%d",arr[i]);
    }
    min=max=arr[0];
    for(i=0; i<size; i++)
    {   if(arr[i]<min)
        {   min=arr[i];
        }
        if(arr[i]>max)
        {   max=arr[i];
        }
    }
    printf("\nMinimum=%d",min);
    printf("\nmaximum=%d",max);
    return 0;
}