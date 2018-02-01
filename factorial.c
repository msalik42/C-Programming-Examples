#include<stdio.h>
int main()
{
    int a,c,fact=1;
    printf("enter the number to calculate factorial\n ");
    scanf("%d",&a);
    for(c=1;c<=a;c++)
        fact=fact*c;
    printf("Factorial of %d is %d \n",a,fact);
    return main();
}
