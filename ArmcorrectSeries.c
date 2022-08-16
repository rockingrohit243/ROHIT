#include<stdio.h>

int main()
{
    int range,n,rem,rev=0,temp;
    printf("Enter the no.");
    scanf("%d",&range);
    
    printf("The Armstrong no are");
    for(n=1; n<=1000; n++)
    {rev=0;
    temp=n;
        while(temp!=0)
        {
            rem=temp%10;
            rev=rev+(rem*rem*rem);
            temp=temp/10;
        }
        if(rev==n)
        {
            printf("%d,",n);
        } 
        
         
     
    }
    return 0;
}