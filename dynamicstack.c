#include<stdio.h>
#include<stdlib.h>

struct Element
{
    int data;
    struct Element* next;
};

struct Element* top=NULL;

int push(int data)
{
    struct Element* newElement = (struct Element*) malloc(sizeof(struct Element));
    newElement->data=data;
    newElement->next=NULL;
    if(isEmpty()==0)
    {
        top=newElement;
    }

    else
    {
        struct Element* temp=top;
        newElement->next=temp;
        top=newElement;
    }
    
}

int pop()
{
    if(isEmpty()==0)
    {
        printf("\n Stack underflow");
    }
    else
    {
        struct Element* temp=top;
        top=top->next;
        int data=temp->data;
        free(temp);
        return data;
    }
}

void peek()
{
    if(isEmpty()==0)
    {
        printf("\n Stack empty.Unable to peek");
    }

    else
    {
        printf("\nElement at top:%d",top->data);
    }
    
}

int isEmpty()
{
    if(top==NULL)
    {
        return 0;
    }

    return 1;
}

void main()
{
    printf("\nData 5 10 15 20 are pushed");
    push(5);
    push(10);
    push(15);
    push(20);
    printf("\n Peek");
    peek();
    printf("\n Pop");
    int popped=pop();
    printf("\n popped Element:%d",popped);
    popped=pop();
    printf("\n popped Element:%d",popped);
    popped=pop();
    printf("\n popped Element:%d",popped);
    popped=pop();
    printf("\n popped Element:%d",popped);
}

