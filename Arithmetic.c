/* Use of arithmetic operator
Day:1
Program:2
Time:11:46
Date:01:mar:2022
*/
#include<stdio.h>

int main()
{
    int n1,n2;
    printf("Enter two number= ");
    scanf("%d%d",&n1,&n2);
    printf("\nThe addition of two numbers is:%d",n1+n2);

    printf("\nThe subtraction of two numbers is:%d",n1-n2);

    printf("\nThe multiplication of two numbers is:%d",n1*n2);

    printf("\nThe division of two numbers is:%.3f",(float)n1/n2);

    printf("\nThe modulus of two numbers is:%d",n1%n2);




    return 0;
}