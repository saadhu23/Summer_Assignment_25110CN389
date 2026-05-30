#include<stdio.h>
int main()
{
    int a,i=2,c=0;
    printf("Enter a number:");
    scanf("%d",&a);
    while(i<a){
        if (a%i==0){
            c+=1;
        }
        i++;
    }
    if (c>0){
        printf("It is not a prime number");
    }
    else{
        printf("It is a prime number");
    }
    return 0;
}