#include<stdio.h>
int main()
{
    int a,b,i=2,j,G=1;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    while(i<=a){
        j=2;
        if (a%i==0){
            while(j<=b){
                if (b%j==0){
                    if (i==j){
                        G=i;
                    }
                }
                j++;
            }
        }
        i++;
    }
    printf("The GCD of the two numbers is %d",G);
    return 0;
}