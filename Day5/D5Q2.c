#include<stdio.h>
int fact(int d){
    int f=1;
    while (d>0){
        f=f*d;
        d--;
    }
    return f;
}
int main(){
    int a,d,sum=0,c;
    printf ("Enter a number:");
    scanf("%d",&a);
    c=a;
    while (a>0){
        d=a%10;
        sum+=fact(d);
        a=a/10;
    }
    if (sum==c){
        printf("The number is a strong number.");
    }
    else{
        printf("It is not a strong number.");
    }
}