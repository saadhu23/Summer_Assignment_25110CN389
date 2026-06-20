#include<stdio.h>
int main(){
    int a,b,i=0;
    printf("Enter the number of elements you want in the array:");
    scanf("%d",&a);
    int arr[a];
    while(i<a){
        printf("Enter the number:");
        scanf("%d",&b);
        arr[i]=b;
        i++;
    }
    i=i-1;
    while(i>=0){
        printf("%d\t",arr[i]);
        i=i-1;
    }
}