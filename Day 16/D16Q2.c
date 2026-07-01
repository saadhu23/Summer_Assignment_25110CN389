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
    int maxFreq = 0;
    int maxElement;
    for(int i = 0; i < a; i++) {
        int count = 1;
        for(int j = i + 1; j < a; j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }
        if(count > maxFreq) {
            maxFreq = count;
            maxElement = arr[i];
        }
    }
    printf("Maximum frequency element: %d\n", maxElement);
    printf("Frequency: %d\n", maxFreq);
    return 0;
}