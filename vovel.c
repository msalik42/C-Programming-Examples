#include<stdio.h>
int main()
{
    char c;
    printf("Enter a character\n");
    scanf("%c",&c);
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
    printf("vowel \n");
    else
    printf("Not a vowel\n");
    return (0);
}
