#include<stdio.h>
int fib(int n){
    if (n==0)
        return 0;
    else if (n==1)
        return 1;
    else
        return fib(n-1)+fib(n-2);
}
int main(){
    int a,i;
    printf("Enter a number:");
    scanf("%d",&a);
    printf("Fibonacci series up to %d terms:\n",a);
    for(i=0;i<a;i++){
        printf("%d ",fib(i));
    }
    return 0;
}