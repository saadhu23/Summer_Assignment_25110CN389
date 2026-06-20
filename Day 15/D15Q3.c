#include<stdio.h>
int main(){
    int a,b,i=0,c;
    printf("Enter the number of elements you want in the array:");
    scanf("%d",&a);
    c=a;
    int arr[a];
    while(a>0){
        printf("Enter the number:");
        scanf("%d",&b);
        arr[i]=b;
        i++;
        a=a-1;
    }
   int last=arr[c-1];
   printf("%d\t",last);
   i=0;
   while(i<c-1){
       printf("%d\t",arr[i]);
       i++;
   }
   return 0;
}