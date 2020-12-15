#include<stdio.h>
#include<stdlib.h>

int bubbleSort(int arr[])
{
    int length=sizeof(arr)/2;
    printf("Size of array:%d",length);
    for(int i=0;i<=length;i++)
    {
        for(int j=0;j<=length-1;j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }

        
    }
    return arr;
}

void main()
{
    system("clear");
    int arr[]={45,55,78,0,1};
    bubbleSort(arr);
}