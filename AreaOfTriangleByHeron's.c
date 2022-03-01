/* find the area of triangle using three sides
Daybjvh
Program:3
Time:11:56
Date:01:mar:2022
*/
#include<stdio.h>
#include<math.h>



int main()
{
    float s1,s2,s3,s,area,temp;
    printf("Enter three sides of the triangle");
    printf(": ");
    scanf("%f%f%f",&s1,&s2,&s3);
    //Appling heron's formula
    s=(s1+s2+s3)/2;
    temp=s*(s-s1)*(s-s2)*(s-s3);
    area=sqrt(temp);
    printf("\n Area of the triangle is=%.3f", area);
    return 0;
}