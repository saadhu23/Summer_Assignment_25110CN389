#include<stdio.h>
int main(){
    int a,b,n,e,i=0;
    printf("Enter the first number of the range:");
    scanf("%d",&a);
    printf("Enter the last number of the range:");
    scanf("%d",&b);
    e=(b-a)+1;
    int arr[e];
    printf("Enter the number to check in the range:");
    scanf("%d",&n);
    while (a<=b){
        arr[i]=a;
        i++;
        a++;
    }
    i=0;
    while(i < e && arr[i] != n) {
        i++;
    }
    printf("The searched number is at the %dth index of the array",i);
}