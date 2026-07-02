#include<stdio.h>
int main() {
    int a, b;
    printf("Enter the number of elements in first array: ");
    scanf("%d", &a);
    int arr1[a];
    printf("Enter the elements of first array:\n");
    for(int i = 0; i < a; i++) {
        scanf("%d", &arr1[i]);
    }
    printf("Enter the number of elements in second array: ");
    scanf("%d", &b);
    int arr2[b];
    printf("Enter the elements of second array:\n");
    for(int i = 0; i < b; i++) {
        scanf("%d", &arr2[i]);
    }
    int merge[a + b];
    for(int i = 0; i < a; i++) {
        merge[i] = arr1[i];
    }
    for(int i = 0; i < b; i++) {
        merge[a + i] = arr2[i];
    }
    printf("Merged Array:\n");
    for(int i = 0; i < a + b; i++) {
        printf("%d ", merge[i]);
    }
    return 0;
}