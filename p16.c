// write a program to read n numbers from user and display them.
#include<stdio.h>
void main(){
    int n;
    printf("Enter the number n");
    scanf("%d",&n);
    int arr[n];
    for(int i=0 ; i<n ; i++){
        printf("enter the number ");
        scanf("%d",&arr[i]);
    }
    for(int i=0 ; i<n ; i++){
        printf("%d",arr[i]);
    }
}