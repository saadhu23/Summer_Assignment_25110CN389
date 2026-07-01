#include<stdio.h>
int main() {
    int a;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &a);
    int arr[a], newArr[a];
    int newSize = 0;
    printf("Enter the elements of the array: ");
    for(int i = 0; i < a; i++) {
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < a; i++) {
        int duplicate = 0;
        for(int j = 0; j < newSize; j++) {
            if(arr[i] == newArr[j]) {
                duplicate = 1;
                break;
            }
        }
        if(duplicate == 0) {
            newArr[newSize] = arr[i];
            newSize++;
        }
    }
    printf("Array after removing duplicates:\n");
    for(int i = 0; i < newSize; i++) {
        printf("%d ", newArr[i]);
    }
    return 0;
}