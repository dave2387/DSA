// 29. Write a program to merge two unsorted arrays. 

#include <stdio.h>

int main() {
    int arr1[] = {5, 2, 9};
    int arr2[] = {8, 3, 1, 7};
    
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int mergedarrSize = size1 + size2;
    int mergedarr[mergedarrSize];

    for (int i = 0; i < size1; i++) {
        mergedarr[i] = arr1[i];
    }

    for (int i = 0; i < size2; i++) {
        mergedarr[size1 + i] = arr2[i];
    }

    printf("Merged array: ");
    for (int i = 0; i < mergedarrSize; i++) {
        printf("%d ", mergedarr[i]);
    }
    return 0;
}