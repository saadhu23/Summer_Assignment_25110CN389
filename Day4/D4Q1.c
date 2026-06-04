#include<stdio.h>
int main(){
    int a,b,c,n,m;
    a=0;
    b=1;
    printf("Enter the number of element to print from the fibonacci series:");
    scanf("%d",&n);
    m=n;
    if (n==1){
        printf("The %dth term of the fibonacci series is %d",m,a);
    }
    else if(n==2){
        printf("The %dth term of the fibonacci series is %d",m,b);
    }
    else{
        printf("%d\n",a);
        printf("%d\n",b);
    n=n-2;
    while(n>0){
        c=a;
        a=b;
        b=b+c;
        n--;
        printf("%d\n",b);
    }
    }
    return 0;
}