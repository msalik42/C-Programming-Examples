#include<stdio.h>
#define MAX 100
main()
{
    int n,i,j,arr[MAX],temp,xchange;
    printf("enter the length of array ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter the %d element :",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        xchange==0;
        for(j=0;j<n-i-1;j++);
        {
        if(arr[j+1]<arr[j])
        {
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            xchange++;
        }
    }
    if(xchange==0)
        break;
    }
    printf("sorted list is \n");
    for(i=0;i<n;i++)
        printf("%d\t",arr[i]);
    printf("\n");

}
