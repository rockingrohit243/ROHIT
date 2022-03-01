/* Use of increment and decrement operator
Day:1
Program:1
Time:11:32
Date:01:mar:2022
*/
#include<stdio.h>

int main()
{
    int Number,result;
    printf("Enter a number : ");
    scanf("%d",&Number);
    result=Number++ + Number-- + ++Number +--Number;
    printf("\n Number++ Number-- ++Number --Number of above number  is  ");
    printf("=%d",result);
    return 0;
}