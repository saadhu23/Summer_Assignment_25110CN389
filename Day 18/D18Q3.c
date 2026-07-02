#include<stdio.h>
int main() {
    int a;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &a);
    int arr[a];
    printf("Enter the sorted elements of the array:\n");
    for(int i = 0; i < a; i++) {
        scanf("%d", &arr[i]);
    }
    int key;
    printf("Enter the element to search: ");
    scanf("%d", &key);
    int low = 0;
    int high = a - 1;
    int found = 0;
    while(low <= high) {
        int mid = (low + high) / 2;
        if(arr[mid] == key) {
            printf("Element found at index %d", mid);
            found = 1;
            break;
        }
        else if(arr[mid] < key) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    if(found == 0) {
        printf("Element not found.");
    }
    return 0;
}