// Write a program to implement a Linear Search using Array. 

#include<stdio.h>

int main() {
    int arr[100], n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int x;
    printf("enter the element to serch :");
    scanf("%d",&x);

    int flag = 0;
    for(int i=0 ; i<n ; i++){
        if(arr[i] == x){
            flag =1;
            break;
        }
    }
    
    if(flag == 1){
        printf("Array have this element");
    }
    else{   
        printf("Array do not have this element");
    }
}