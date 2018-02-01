#include<stdio.h>
#include<math.h>
int main()
{
    int i,n;
    printf("Enter a number :");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
        if(n%i==0)
        break;
        if(i>sqrt(n))
        printf("Prime\n");
        else
        printf("Not Prime\n");
        return (main());
}
