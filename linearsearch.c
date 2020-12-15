#include<stdio.h>

linearSearch(int arr[],int data)
{
    int length=sizeof(arr)/2;
    int flag=-1;
    for(int i=0;i<=length;i++)
    {
        if(arr[i]==data)
        {
            printf("Give element is found in the position:%d\n",i+1);
            flag=1;
        }
    }

    if(flag!=1)
    {
        printf("Element not found\n");
    }
}

void main()
{
    system("clear");
    int arr[] = {34,65,89,1,32};
    linearSearch(arr,32);
}