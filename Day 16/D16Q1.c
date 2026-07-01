#include<stdio.h>
int main() {
    int a;
    printf("Enter the number of elements in array: ");
    scanf("%d", &a);
    int arr[a];
    printf("Enter the elements of the array: ");
    for(int i = 0; i < a; i++) {
        scanf("%d", &arr[i]);
    }
    int f, l;
    printf("Enter the first number of the range: ");
    scanf("%d", &f);
    printf("Enter the last number of the range: ");
    scanf("%d", &l);
    int expectedSum = (l * (l + 1)) / 2 - ((f - 1) * f) / 2;
    int actualSum = 0;
    for(int i = 0; i < a; i++) {
        actualSum += arr[i];
    }
    printf("Missing number is: %d", expectedSum - actualSum);
    return 0;
}