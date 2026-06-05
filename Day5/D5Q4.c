#include<stdio.h>

int count(int a)
{
    int b = 2, c = 0;

    while(b < a)
    {
        if(a % b == 0)
            c++;
        b++;
    }

    return c;
}

int main()
{
    int n, i = 2, largest = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(i <= n)
    {
        if(n % i == 0)
        {
            if(count(i) == 0) // i is prime
            {
                largest = i;
            }
        }
        i++;
    }

    printf("Largest prime factor = %d", largest);

    return 0;
}