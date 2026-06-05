#include <stdio.h>
int main(){
    int a,i=1,sum=0;
    printf("Enter a number: ");
    scanf("%d", &a);
    while (i<a){
        if (a%i==0){
            sum += i;
        }
        i++;
    }
    if (sum==a){
        printf("%d is a perfect number.", a);
    }
    else{
        printf("%d is not a perfect number.", a);
    }
    return 0;
}