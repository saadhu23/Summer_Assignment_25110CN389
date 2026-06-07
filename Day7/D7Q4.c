#include<stdio.h>
#include<math.h>
int rev(int n){
    if(n < 10)
        return n;
    int digits = (int)log10(n);
    return (n % 10) * pow(10, digits) + rev(n / 10);
}
int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("Reverse of %d is %d", a, rev(a));
    return 0;
}