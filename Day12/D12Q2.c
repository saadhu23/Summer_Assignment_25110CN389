#include<stdio.h>
#include <stdio.h>
#include <math.h>
void arms(int n)
{
    int count = 0, i = 10;
    while (count < n)
    {
        int nd = 0, sd = 0;
        int j = i, k = i, d;
        while (j > 0)
        {
            nd++;
            j /= 10;
        }
        j = i;
        while (j > 0)
        {
            d = j % 10;
            sd += pow(d, nd);
            j /= 10;
        }
        if (k == sd)
        {
            count++;
            printf("%d is the %dth Armstrong number\n", k, count);
        }
        i++;
    }
}
int main()
{
    int n;
    printf("Enter the number of Armstrong numbers to print: ");
    scanf("%d", &n);
    arms(n);
    return 0;
}