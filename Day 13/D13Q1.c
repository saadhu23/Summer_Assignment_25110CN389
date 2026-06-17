#include<stdio.h>
int main(){
    int a,i=0,b;
    printf("Enter the number of elements in the array:");
    scanf("%d",&a);
    int arr[a];
    while (i<a){
        printf("Enter the element:");
        scanf("%d",&b);
        arr[i]=b;
        i++;
    }
    i=0;
    while(i<a){
        printf("%d\t",arr[i]);
        i++;
    }
}