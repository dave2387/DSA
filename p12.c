#include<stdio.h>
void main(){
    int n,count=0;
    printf("enter the number");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
        if(count==2){
            printf("Given number is prime");
        }
        else{
            printf("Given number is not prime\n");
            printf("%d",count);
        }
}