#include<stdio.h>
int main()
{
    int a,d,n=0;
    printf("Enter a number: ");
    scanf("%d", &a);
    while (a>0)
    {
        d=a%10;
        n=n*10+d;
        a=a/10;
    }
    printf("The reverse of the number is: %d", n);
    return 0;
}