#include<stdio.h>
#include<math.h>
int main(){
    int a,i=0,d,n=0;
    printf ("Enter a binary number to convert it into decimal form:");
    scanf("%d",&a);
    while(a>0){
        d=a%10;
        n=n+d*pow(2, i);
        i++;
        a=a/10;
    }
    printf ("The decimal form of the input number is %d\n",n);
    return 0;
}