#include<stdio.h>
#include<stdlib.h>

int stack[5];
int top=0;
int push(int data)
{
    if(isEmpty() == 1)
    {
        top++;
        stack[top] = data;
    }

    else if(isFull() == 1)
    {
        printf("\n Stack Overflow");
        return -1;
    }

    else
    {
        top++;
        stack[top] = data;
    }
    
}


int pop()
{
    if(isEmpty() == 0)
    {
        printf("\n Stack Underflow");
    }

    else 
    {
        
        int temp=stack[top];
        top--;
        return temp;
    }
}

void peek()
{
    if(isEmpty() == 0)
    {
        printf("\n Stack is empty");
    }
    else
    {
      printf("\nElement at top:%d",stack[top]);  
    }
    
}

int isEmpty()
{
    if(top==-1)
    {
        return 0;
    }
    return 1;
}

int isFull()
{
    if(top==5-1)
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
