#include<stdio.h>
void main()
{
    int arr[]= {3,4,7,1,2,8};
    int i,j,temp;
    for(i=0;i<6;i++)
    {
        for(j=i+1;j<6;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(i=0;i<6;i++)
    {
        printf("\n%d",arr[i]);
    }
}
