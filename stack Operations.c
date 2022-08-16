#include<stdio.h>
#include<stdlib.h>
#define size 5
int arr[size],i;
int top=-1;
void push()
{   int element;
    printf("\n enter the elements that you want yo store");
    scanf("%d",&element);
    if(top==size-1)
    {
        printf("Overflow");
    }
    else
    {
        top++;
        arr[top]=element;
    }
}

void pop()
{
    if(top==-1)
    {
        printf("underflow");
    }
    else
    {
        top--;
    }
}


void display ()
{
    if(top==-1)
    {
        printf("stack is empty");
    }
    else
    {
        for(i=top; i>=0; i--)
        {
            printf("%d",arr[i]);
        }
    }
}
int main()
{
    int ch;
    do {
        printf("Menu \n");
        printf("1-push \n 2-pop \n 3-display\n 4-exit");
        printf("Enter your choice 1-4 \n ");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0    );
        }
        }while(ch<=4);
       
    return 0;
 }