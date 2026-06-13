#include<stdio.h>
void selectionSort(int arr[],int n)
{
    int i,j,min,temp;

    for(i=0;i<=n;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
                min=j;
        }
        temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
    for(i=0;i<n;i++)
    {
        printf("\n%d ",arr[i]);
    }
}
void main()
{
    int arr3[] = {7,3,6,4,3};
    int sz = sizeof(arr3)/sizeof(arr3[0]);
    selectionSort(arr3,sz);
}
