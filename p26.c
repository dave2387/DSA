//  Write a program to insert a number in an array that is already sorted in an 
// ascending order.

#include<stdio.h>
void main(){
    int n,num,temp;
    printf("Enter the number n");
    scanf("%d",&n);
    int arr[n+1];
    for(int i=0 ; i<n ; i++){
        printf("enter the number ");
        scanf("%d",&arr[i]);
    }

    printf("Enter number to insert : ");
    scanf("%d",&num);

    for(int i=0 ; i<n ; i++){
        if(arr[i]>num){
            temp=i;
        }
    }
    for(int i=n ; i<temp ; i--){
        arr[i]=arr[i-1];
    }

    arr[temp]=num;
     
    for(int i=0 ; i<n+1 ; i++){
        printf("%d",arr[i]);
    }
}