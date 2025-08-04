//wap  to find position of the smallest number & the largest number from given n numbers
#include <stdio.h>

void main() {
    int n, i, minIndex = 0, maxIndex = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++) {
        printf("Enter %d numbers: ", n);
        scanf("%d", &arr[i]);
    }
    for (i = 1; i < n; i++) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }
    printf("Smallest number is at position: %d\n", minIndex );
    printf("Largest number is at position: %d\n", maxIndex );
}