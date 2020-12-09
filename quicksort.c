#include<stdio.h>
#include<stdlib.h>
void swap(int *startIndex,int *endIndex)
{
    int temp=*startIndex;
    *startIndex = *endIndex;
    *endIndex = temp;
}

int partition(int arr[],int startIndex,int endIndex)
{
    int pivot = endIndex;
    int index = startIndex;

    for(int i=startIndex;i<endIndex;i++)
    {
        if(arr[i] < arr[pivot])
        {
            swap(&arr[i],&arr[index]);
            index++;

        }
    }
    swap(&arr[index],&arr[pivot]);
    return index;

}
int quickSort(int arr[],int startIndex,int endIndex)
{
    if(startIndex>endIndex){
        int p=partition(arr,startIndex,endIndex);
        quickSort(arr,p-1,startIndex);
        quickSort(arr,p+1,endIndex);
    }
}




void main()
{
    int arr[] = {23,45,76,89,10};
    quickSort(arr,0,4);
    for(int i=0;i<5;i++)
   {
       printf("Element:%d",arr[i]);
   }
  
}