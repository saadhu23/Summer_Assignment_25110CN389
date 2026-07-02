#include<stdio.h>
int main() {
    int a;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &a);
    int arr[a];
    printf("Enter the elements of the array:\n");
    for(int i = 0; i < a; i++) {
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < a - 1; i++) {
        int min = i;
        for(int j = i + 1; j < a; j++) {
            if(arr[j] < arr[min]) {
                min = j;
            }
        }
        if(min != i) {
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
    printf("Sorted array:\n");
    for(int i = 0; i < a; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}