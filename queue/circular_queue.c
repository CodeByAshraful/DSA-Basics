#include<stdio.h>
#include<stdlib.h>
#define max 6
int queue[max];
int front=-1,rear=-1;
void enqueue(int element)
{
    if(front==-1 && rear==-1)
    {
        front=0;
        rear=0;
        queue[rear]=element;
    }
    else if((rear+1)%max==front)
    {
        printf("\n");
        printf("\nQueue Overflow!");
    }
    else
    {
        rear=(rear+1)%max;
        queue[rear]=element;
    }
}
void dequeue()
{
    if(front==-1 && rear==-1)
    {
        printf("\n");
        printf("\nQueue is empty");
    }
    else if(front==rear)
    {
       front=-1;
       rear=-1;
    }
    else
    {
        printf("\n");
        printf("\nDequeued value is : %d ",queue[front]);
        front=(front+1)%max;
    }
}
void display()
{
    printf("\n");
    printf("The queue value are : ");
   int i=front;

    if(front==-1 && rear==-1)
    {
        printf("\n");
        printf("\nQueue is empty");
    }
    else
    {
   while(i<=rear)
   {
       printf("%d ",queue[i]);
       i=(i+1)%max;
   }
    }

}

int main()
{
    int ch,element;
    while(1)
    {
        printf("\nOption 1 : enqueue.");
        printf("\nOption 2 : dequeue.");
        printf("\nOption 3 : display.");
        printf("\nOption 4 : End.");
        printf("\n");
        printf("enter the choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("\nEnter the added element onto queue : ");
            scanf("%d",&element);
            enqueue(element);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            printf("\n");
            printf("\nWrong Option");
            break;
        }

    }


    return 0;
}
