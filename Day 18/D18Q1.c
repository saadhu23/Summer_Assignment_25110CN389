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
        for(int j = 0; j < a - 1 - i; j++) {
            if(arr[j] > arr[j + 1]) {

                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

            }
        }
    }
    printf("Sorted array:\n");
    for(int i = 0; i < a; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}