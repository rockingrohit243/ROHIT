#include<stdio.h>

int main()
{
    int arr[20],i,pos,size,value;
    printf("Enter the array size\n");
    scanf("%d",&size);
    printf("enter the array elements");

    for(i=0; i<
            size; i++)
    {   scanf("%d",&arr[i]);
    }
    printf("Enter the position and value");
    scanf("%d%d",&pos,&value);
    for(i=size-1; i>=pos-1; i--)
    {
        arr[i+1]=arr[i];
    }
    arr[pos-1]=value;
    for(i=0; i<=size; i++)
    {   printf ("%d",arr[i]);
    }

    return 0;
}