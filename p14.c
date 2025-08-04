// 14. WAP to find the sum of 1 + (1+2) + (1+2+3) + (1+2+3+4)+ …+(1+2+3+4+….+n). 

#include<stdio.h>

void main(){
    int n;
    printf("enter the number n :");
    scanf("%d",&n);
    int sum = 0,totalSum = 0;
    for(int i=1 ; i<=n ; i++ ){
        int sum = 0;
        for (int j = 1; j <= i; j++) {
            sum += j;
        }
        totalSum += sum;

    }
    printf("%d",totalSum);
}