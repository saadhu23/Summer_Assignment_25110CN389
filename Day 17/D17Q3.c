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
    int intersection[a < b ? a : b];
    int size = 0;
    for(int i = 0; i < a; i++) {
        int found = 0;
        for(int j = 0; j < b; j++) {
            if(arr1[i] == arr2[j]) {
                found = 1;
                break;
            }
        }
        int duplicate = 0;
        for(int j = 0; j < size; j++) {
            if(arr1[i] == intersection[j]) {
                duplicate = 1;
                break;
            }
        }
        if(found == 1 && duplicate == 0) {
            intersection[size] = arr1[i];
            size++;
        }
    }
    printf("Intersection of arrays:\n");
    for(int i = 0; i < size; i++) {
        printf("%d ", intersection[i]);
    }
    return 0;
}