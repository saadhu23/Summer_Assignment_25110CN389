#include<stdio.h>
int main(){
    int n,t,i;
    printf("Enter the number to get its multiplication table: ");
    scanf("%d",&n);
    printf("Enter the number of terms: ");
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        printf("%d x %d = %d\n",n,i,n*i);
    }
    return 0;
}