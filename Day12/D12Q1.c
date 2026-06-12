#include <stdio.h>
void pal(int n)
{
    int count = 0, i = 10;
    while (count < n)
    {
        int j = i;
        int temp = i;
        int rev = 0;
        while (temp > 0)
        {
            int d = temp % 10;
            rev = rev * 10 + d;
            temp = temp / 10;
        }
        if (i == 0 || rev == j)
        {
            count++;
            printf("%d is the %dth palindrome\n", j, count);
        }
        i++;
    }
}
int main()
{
    int n;
    printf("Enter the number of palindromes you want: ");
    scanf("%d", &n);
    pal(n);
    return 0;
}