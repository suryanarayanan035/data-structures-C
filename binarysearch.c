#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int* bubbleSort(int arr[])
{
    int length=sizeof(arr)/2;
    
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



int binarySearch(int arr[],int data,int startIndex,int endIndex)
{
    int length=(startIndex+endIndex)/2;
    int mid=ceil(length/2);
    int flag = -1;
    if(arr[mid]==data)
    {
        printf("Given Data found at pos:%d",mid+1);
        flag=1;
        return arr[mid];
    }

    else if(arr[mid] < data)
    {
        binarySearch(arr,data,mid+1,endIndex);   
    }
    else
    {
        binarySearch(arr,data,startIndex,mid-1);
    }
    
}
void main()
{
    system("clear");
    int arr[]={31,45,76,89,32};
    int* arr1=bubbleSort(arr);
    int value=binarySearch(arr1,32,0,4);
    printf("%d",value);
}