#include<stdio.h>
int main(){
    int a,i=0,b,lar=0;
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
        if (arr[i]>lar){
            lar=arr[i];
        }
        else{
            continue;
        }
        i++;
    }
    printf("The largest number of the input number is :%d",lar);
}