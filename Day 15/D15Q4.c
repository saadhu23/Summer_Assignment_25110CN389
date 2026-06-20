#include<stdio.h>
int main() {
    int a, i = 0, b, count = 0;
    printf("Enter the number of elements you want in the array: ");
    scanf("%d", &a);
    int arr[a];
    while(i < a) {
        printf("Enter the number: ");
        scanf("%d", &b);
        arr[i] = b;
        i++;
    }
    i = 0;
    while(i < a) {
        if(arr[i] == 0) {
            count++;
        }
        else {
            printf("%d\t", arr[i]);
        }
        i++;
    }
    while(count > 0) {
        printf("0\t");
        count--;
    }
    return 0;
}