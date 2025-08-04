// Write a program to insert a number at a given location in an array. 
#include<stdio.h>
void main(){
    int n,num,index;
    printf("Enter the number n");
    scanf("%d",&n);
    int arr[n];
    for(int i=0 ; i<n ; i++){
        printf("enter the number ");
        scanf("%d",&arr[i]);
    }

    printf("Enter the number to replace :");
    scanf("%d",&num);

    printf("Enter index to replace : ");
    scanf("%d",&index);

    for(int i=n ; i<index ; i--){
        arr[i]=arr[i-1];
    }

    arr[index]=num;
     
    for(int i=0 ; i<n ; i++){
        printf("%d",arr[i]);
    }
    

    



}