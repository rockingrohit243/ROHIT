#include<stdio.h>
int main()
{
    char str1[100];
    char newString[10][10];
    int i,j,ctr;

    printf(" Input  a string : ");
    fgets(str1,sizeof str1,stdin);

    j=0; ctr=0;
    for(i=0;i<=(strlen(str1));i++)
    {

        if(str1[i]==' '||str1[i]=='\0')
        {
            newString[ctr][j]='\0';
            ctr++;  //for next word
            j=0;    //for next word, init index to 0
        }
        else
        {
            newString[ctr][j]=str1[i];
            j++;
        }
    }

    char mn[]= "The";

	   for(j=0; j<ctr;j++)
	   {
		   if(strcmp(mn,newString[j])==0)
		   {
			   printf("%s\t", newString[j+1]);
		   }
	   }
char mn[]= "the";

	   for(j=0; j<ctr;j++)
	   {
		   if(strcmp(mn,newString[j])==0)
		   {
			   printf("%s\t", newString[j+1]);
		   }
	   }
char mn[]= "a";

	   for(j=0; j<ctr;j++)
	   {
		   if(strcmp(mn,newString[j])==0)
		   {
			   printf("%s\t", newString[j+1]);
		   }
	   }
char mn[]= "A";

	   for(j=0; j<ctr;j++)
	   {
		   if(strcmp(mn,newString[j])==0)
		   {
			   printf("%s\t", newString[j+1]);
		   }
	   }
char mn[]= "an";

	   for(j=0; j<ctr;j++)
	   {
		   if(strcmp(mn,newString[j])==0)
		   {
			   printf("%s\t", newString[j+1]);
		   }
	   }
char mn[]= "An";

	   for(j=0; j<ctr;j++)
	   {
		   if(strcmp(mn,newString[j])==0)
		   {
			   printf("%s\t", newString[j+1]);
		   }
	   }
}