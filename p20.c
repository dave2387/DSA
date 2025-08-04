//wap to weather the array  contains a duplicat number or not
#include<stdio.h>
void main(){
    int n,flag=0;
    printf("Enter the number n:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0 ; i<n ; i++){
        printf("enter the number ");
        scanf("%d",&arr[i]);
    }
    for(int i=0 ; i<n ; i++){
        for(int j=i+1 ; j<n ; j++){
            if(arr[i]==arr[j] && flag==0){
                printf("array have duplicate number");
                flag=1;
                break;
            }
        }
    }
    if(flag==0){
        printf("no duplicate found");
    }
}