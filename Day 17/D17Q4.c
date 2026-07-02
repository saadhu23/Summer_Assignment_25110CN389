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
    int found = 0;
    printf("Common elements are:\n");
    for(int i = 0; i < a; i++) {
        for(int j = 0; j < b; j++) {
            if(arr1[i] == arr2[j]) {
                int duplicate = 0;
                for(int k = 0; k < i; k++) {
                    if(arr1[k] == arr1[i]) {
                        duplicate = 1;
                        break;
                    }
                }
                if(duplicate == 0) {
                    printf("%d ", arr1[i]);
                    found = 1;
                }
                break;
            }
        }
    }
    if(found == 0) {
        printf("No common elements found.");
    }
    return 0;
}