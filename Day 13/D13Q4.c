#include<stdio.h>
int main(){
    int a,i=0,b,ev=0,od=0;
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
        if (arr[i]%2==0){
            ev++;
        }
        else{
            od++;
        }
        i++;
    }
    printf("The number of the even input number is :%d\n",ev);
    printf("The number of the odd input number is :%d",od);
}