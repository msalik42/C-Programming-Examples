#include<stdio.h>
#define MAX 100
void quick(int arr[],int low,int up);
int partition(int arr[],int low,int up);
main()
{
    int n,i,j,k,arr[MAX];
    printf("enter the length of array ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter the %d element :",i+1);
        scanf("%d",&arr[i]);
    }
    quick(arr,0,n-1);
    printf("sorted list is \n");
    for(i=0;i<n;i++)
        printf("%d\t",arr[i]);
    printf("\n");
}
void quick(int arr[],int low,int up)
{
    int pivloc;
    if(low>=up)
        return;
    pivloc = partition(arr,low,up);
    quick(arr,low,pivloc-1);
    quick(arr,pivloc+1,up);
}
int partition(int arr[],int low,int up)
{
    int temp,i,j,pivot;
    i=low+1;
    j=up;
    pivot = arr[low];
    while(i<=j)
    {
        while((arr[i]<pivot)&&(i<up))
            i++;
        while(arr[j]>pivot)
            j--;
    if(i<j)
    {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    else
        i++;
    }
arr[low]=arr[j];
arr[j]=pivot;
return j;
}
