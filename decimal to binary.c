#include<stdio.h>
int main()
{
    int a,i=0,bin[4];
    printf("Enter a decimal number to convert in Binary :");
    scanf("%d",&a);
    while(a>0)
    {
        bin[i]=a%10;
        a=a/10;
        i++;
    }
    for(i=3;i>=0;i--)
        printf("%d ",bin[i]);
    return 0;
}
