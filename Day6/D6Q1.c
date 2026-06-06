#include<stdio.h>
int main(){
    int a,d,n=0,r=0,dd;
    printf("Enter a number to convert to binary: ");
    scanf("%d",&a);
    while(a>0){
        d = a % 2;
        a = a / 2;
        n = (n * 10) + d;
    }
    while(n > 0){
        dd = n % 10;
        n = n / 10;
        r = (r * 10) + dd;
    }
    printf("The binary of the number given as input is %d", r);
    return 0;
}