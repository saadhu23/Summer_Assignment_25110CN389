#include<stdio.h>
int main() {
    int a;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &a);
    int arr[a];
    printf("Enter the elements of the array: ");
    for(int i = 0; i < a; i++) {
        scanf("%d", &arr[i]);
    }
    int sum;
    printf("Enter the required sum: ");
    scanf("%d", &sum);
    int found = 0;
    for(int i = 0; i < a; i++) {
        for(int j = i + 1; j < a; j++) {
            if(arr[i] + arr[j] == sum) {
                printf("Pair found: %d and %d\n", arr[i], arr[j]);
                found = 1;
            }
        }
    }
    if(found == 0) {
        printf("No pair found.");
    }
    return 0;
}