#include<stdio.h>
int main(){
    int a,i=0,b,sum=0;
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
       sum=sum+arr[i];
        i++;
    }
    printf("The sum of the input number is :%d",sum);
}