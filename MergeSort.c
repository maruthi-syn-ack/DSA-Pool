//Sorts The given array using merge sort

#include<stdio.h>

void mergesort(int arr[],int start,int end)
{
    if (start<end)
    {
    int mid =   start+(end-start)/2;

    mergesort(arr,start,mid);
    mergesort(arr,mid+1,end);
    merge(arr,start,mid,end);
    }

}

void merge(int arr[],int start,int mid,int end)
{
    // creating size variable for auxialry array 
    int len1 = mid-start +1;
    int len2 = end -mid;
    int k;
    // creating auxilry array 
    int first[len1],second[len2];

    // copying first array 
    k=start;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[k++];
    }
    // copying  second array 
    
    k = mid+1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[k++];
    }    

    int index1=0,index2=0,mainindex =start;
    while (index1<len1&& index2<len2)
    {
        if(first[index1]<=second[index2])
            arr[mainindex++]=first[index1++];
        else
            arr[mainindex++]=second[index2++];

    }
    while (index1<len1)
    {
        arr[mainindex++]=first[index1++];

    }
    while (index2<len2)
    {
        arr[mainindex++]=second[index2++];
    }
}

//prints an array 
void printArray(int A[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d \n", A[i]);
    printf("\n");
}

int main()
{
    int a[] ={8,6,4,9,1};
    mergesort(a,0,4);
    printArray(a,5);
    return 0;
}