#include<stdio.h>
int main() {
    int a, b, i = 0, n, c = 0;
    printf("Enter the number of elements you want in the array: ");
    scanf("%d", &a);
    int arr[a];
    while(i < a) {
        printf("Enter number: ");
        scanf("%d", &b);
        arr[i] = b;
        i++;
    }
    printf("Enter the number to check its frequency: ");
    scanf("%d", &n);
    i = 0;
    while(i < a) {
        if(arr[i] == n) {
            c++;
        }
        i++;
    }
    printf("The number of times %d appeared in the array is %d", n, c);
    return 0;
}