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
    int unionArr[a + b];
    int size = 0;
    for(int i = 0; i < a; i++) {
        int duplicate = 0;
        for(int j = 0; j < size; j++) {
            if(arr1[i] == unionArr[j]) {
                duplicate = 1;
                break;
            }
        }
        if(duplicate == 0) {
            unionArr[size] = arr1[i];
            size++;
        }
    }
    for(int i = 0; i < b; i++) {
        int duplicate = 0;
        for(int j = 0; j < size; j++) {
            if(arr2[i] == unionArr[j]) {
                duplicate = 1;
                break;
            }
        }
        if(duplicate == 0) {
            unionArr[size] = arr2[i];
            size++;
        }
    }
    printf("Union of arrays:\n");
    for(int i = 0; i < size; i++) {
        printf("%d ", unionArr[i]);
    }
    return 0;
}