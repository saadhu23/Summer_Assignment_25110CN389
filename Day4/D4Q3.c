#include<stdio.h>
#include<math.h>
int main(){
    int n,c=0,nn,d,check=0,m;
    printf("Enter a number to check if the number is an Armstrong number or not:");
    scanf("%d",&n);
    nn=m=n;
    while (n>0){
        n=n/10;
        c++;
    }
    while(nn>0){
        d=(nn%10);
        nn=nn/10;
        check=(check)+(pow(d,c));
    }
    if (check==m){
        printf("The number is an armstrong number.");
    }
    else{
        printf("The number is not an armstrong number.");
    }
    return 0;
}