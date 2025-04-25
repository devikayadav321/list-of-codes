#include<stdio.h>
void merge(int arr[],int left,int mid,int right)
{
    int i,j,k;
    int n1=mid-left+1;
    int n2=right-mid;
    int L[n1],R[n2];
    for(int i=0;i<n1;i++)
    {
        L[i]=arr[left+i];
    }
    for(int j=0;j<n2;j++)
    {
        R[j]=arr[mid+1+j];
    }
  
    while(i<n1&&j<n2)
    {
        if(L[i]<R[j])
        {
            arr[k++]=L[i++];
        }
        else
        {
            arr[k++]=R[j++];
        }
        while(i<n1)
        {
            arr[k++]=L[i++];
        
        }
        while(j<n2)
        {
            arr[k++]=R[j++];
        }
    }
}
void mergesort(int arr[],int left,int right)
{
    if(left<right)
    {
        int mid=left+(right-left)/2;
        mergesort(arr,left,right);
        mergesort(arr,mid+1,right);
        merge(arr,left,mid,right);
    }
}
void printArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d\n",arr[i]);
    }
    printf("\n");
}
int main()
{
    int arr[]={12,16,34,9,5,2,8};
    int arr_size=sizeof(arr)/sizeof(arr[0]);
    printf("Original Array\n");
    printArray(arr,arr_size);
    printf("Sorted Array\n");
    printArray(arr,arr_size);
    return 0;
}
