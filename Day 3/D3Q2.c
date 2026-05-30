#include<stdio.h>
int main()
{
    int s,e;
    printf("Enter the starting point of the range:");
    scanf("%d",&s);
    printf("Enter the ending point of the range:");
    scanf("%d",&e);
    while(s<=e){
        printf("%d\n",s);
        s++;
    }
    return 0;
}