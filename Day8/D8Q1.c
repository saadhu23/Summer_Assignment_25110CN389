#include<stdio.h>
int main(){
    int r, i = 1, j;
    printf("Enter the number of rows of the pyramid: ");
    scanf("%d", &r);
    while(i <= r){
        j = 1;  // Reset j for each row
        while(j <= i){
            printf("* ");
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}