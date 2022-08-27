#include<stdio.h>
int Rohit()
{   int arr[100],brr[100],crr[100],num,temp,count=0,first,second,i,temproot,j;
    printf("Enter the number: ");
    scanf("%d",&num);
    temp=num;
    //finding number length
    while(num!=0)
    {
        num=num/10;
        count++;
    }

    temproot=temp;
    for(i=0; i<count-2; i++)
    {
        temp=temp/10;
    }
    first=temp/10;
    second=temp%10;
    int sum=first+second;
    //expanding the number and store one by one in array
    for(i=0; temproot!=0; i++)
    {
        arr[i]=temproot%10;
        temproot=temproot/10;
    }
//reverse the array element
    for( i = 0; i<count/2; i++) {
        int temp = arr[i];
        arr[i] = arr[count-i-1];
        arr[count-i-1] = temp;
    }

//agar sum 1 digit he to
    if(sum<=9)
    {
        for(i=0; i<=count; i++)
        {
            if(sum==arr[i])
            {
                return 1;
            }
        }
    }

    else if(sum>=10)
    {   int sumrem=sum%10;
        int sumnum=sum/10;
        for(i=0; i<count; i++)
        {   if(sumnum==arr[i])
            {   if (sumrem==arr[i+1])
                {
                    return 1;
                }
            }
        }
    }
    
}
int main()
{
    int result=Rohit();
    if(result==1)
        printf("1");
    else
        printf("0");
}