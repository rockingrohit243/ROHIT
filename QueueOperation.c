#include<stdio.h>
#include<stdlib.h>
#define size 5
int arr[size],rear=-1,front=-1,n,i;
void enqueue(n)
{   printf("Enter the element that you want to insert \n");
    scanf("%d",&n);
    if(rear==size-1)
    {   printf("overflow\n");
    }
    else if(rear==front==-1)
    {
        rear=front=0;
        rear=n;
    }
    else
    {
        rear++;
        arr[rear]=n;
    }
}

void dequeue()
{
    if(front==-1 && rear==-1)
    {
        printf("Underflow\n");
    }
    else if (front==rear)
    {
        front=rear=-1;

    }
    else
        front++;
}

void display()
{
    if(front==-1 && rear==-1)
    {
        printf("queue is empty\n");
    }
    else
    {
        for(i=front; i<=rear; i++)
        {
            printf("The elements are=%d",arr[i]);
        }
    }

}
int main()
{   int ch;

    do {
        printf("menu\n");
        printf("1-insertion \n 2-deletion \n 3-display \n 4-exit\n");
        printf("Enter your choice\n");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            enqueue ();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        }
    }
    while(ch<=4);


    return 0;
}
