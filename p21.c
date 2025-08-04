//  Read n numbers in an array then read two different numbers, replace 1st 
// number with 2nd number in an array and print its index and final array.
#include<stdio.h>
void main(){
    int n,x,y,i;
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

    printf("Enter the number x and y");
    scanf("%d %d",&x , &y);
    if(arr[i]==x){
        printf("The index of elementis :%d",i);
    }
}