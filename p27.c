// Write  a  program to delete  a number  from  an  array  that  is  already  sorted  in  an 
// ascending order.

#include <stdio.h>

int main() {
    int arr[] = {2, 4, 6, 8, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int numToDelete = 6;
    int index = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] == numToDelete) {
            index = i;
            break;
        }
    }

    if (index != -1) {
        for (int i = index; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--;
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}