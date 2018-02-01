#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int stack_arr[MAX];
int top=-1;
int push(int item);
int pop();
int peek();
int isEmpty();
int isFull();
void display();
int item;
main()

{
    int item,choice;
    while(1)
    {
        printf("1.push\n");
        printf("2.pop\n");
        printf("3.Display the top element\n");
        printf("4.Display all the elements\n");
        printf("5.Quit\n");
        printf("Enter your choice :");
        scanf("%d",&choice);
        switch(choice)
            {
            case 1:
                printf("Enter element to be pushed :");
                scanf("%d",&item);
                push(item);
                break;
            case 2:
                item=pop();
                printf("Poped item is %d",item);
                break;
            case 3:
                printf("item at the top is %d",peek);
                break;
            case 4:
                display();
                break;
            case 5:
                exit(1);
            default:
                printf("wrong choice");

            }
    }
}
int push(int item)
{
    if(isFull())
        {
        printf("Stack is over flow\n");
        return;
        }
        top=top+1;
        stack_arr[top]=item;
}
int pop()
{
    if(isEmpty())
    {
        printf("stack is under flow");
        exit(1);
    }
    top=top-1;
    return item;
}
int peek()
{
    if(isEmpty())
    {
        printf("Stack is under flow");
        exit(1);
    }
    return;
}
int isEmpty()
{
    if(top==-1)
        return 1;
    else

        return 0;
}
int isFull()
{
    if(top==MAX-1)
        return 1;
    else
        return 0;
}
void display()
{
    int i;
    if(isEmpty())
    {
        printf("stack is under flow");
        return;
    }
    printf("stack elements are \n");
        for(i=top;i>=0;i--)
                printf("%d\n",stack_arr[i]);
        printf("\n");
}
