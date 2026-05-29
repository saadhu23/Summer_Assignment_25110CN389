#include<stdio.h>
int main()
{
    int a,s,n=0;
    printf("Enter a number: ");
    scanf("%d", &a);
    while(a>0)
    {
        s=a%10;
        n+=s;
        a=a/10;
    }
    printf("The sum of the digits is: %d", n);
    return 0;
}