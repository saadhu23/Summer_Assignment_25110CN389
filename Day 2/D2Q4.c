#include<stdio.h>
int main()
{
    int a, d, n = 0, original;
    printf("Enter a number: ");
    scanf("%d", &a);
    original = a;
    while (a > 0) {
        d = a % 10;
        n = n * 10 + d;
        a = a / 10;
    }
    printf("The original number is: %d\n", original);
    if (n == original)
    {
        printf("The number is a palindrome.");
    }
    else
    {
        printf("The number is not a palindrome.");
    }
    return 0;
}