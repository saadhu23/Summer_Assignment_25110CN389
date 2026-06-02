#include<stdio.h>
int main()
{
    int a,d,n=1;
    printf("Enter a number :");
    scanf("%d", &a);
    while(a>0)
    {
        d=a%10;
        n=n*d;
        a=a/10;
    }
    printf("The product of the digits is: %d", n);
    return 0;
}