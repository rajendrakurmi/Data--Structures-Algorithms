#include<stdio.h>
void main()
{
    int arr1[]= {7,4,3,6,2,8};
    int sz= sizeof(arr1)/sizeof(arr1[0]);
    int i,j,temp;
    for(i=0;i<sz;i++)
    {
        for(j=i+1;j<sz;j++)
        {
            if(arr1[i]>arr1[j])
            {
                temp = arr1[i];
                arr1[i]=arr1[j];
                arr1[j]=temp;

            }
        }
    }
    for(i=0;i<sz;i++)
    {
        printf("\n%d",arr1[i]);
    }
}
