#include<stdio.h>

    void foo(char *p)
    {
        printf("%s",p);
    }
int main()
{
    char str[]="Tridentacadrmy";
    foo(str+5);

    return 0;
}