#include<stdio.h>
#include<string.h>
int main()
{
int i=0,j=0;
char name[50],result[10];
printf("enter the name\n");
gets(name);
result[0]=name[0];
for(i=0;i<strlen(name);i++)
{
  if(name[i]==' ')
    {
      j++;
      result[j]=name[i+1];
    }
    
 }
result[j+1]='\0';
printf("The result is: ");
puts(result);
return 0;
}
    
      