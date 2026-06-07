#include<stdio.h>
int sum(int n){
    if (n==0){
        return 0;
    }
    else{
        return (n%10)+sum(n/10);    
}
}
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("Sum of digits of %d is %d", a, sum(a));
    return 0;
}