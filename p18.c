#include<stdio.h>
void main(){
    int n;
    float avg,sum=0;
    printf("enter the number n:");
    scanf("%d", &n);
    for(int i=1 ; i<=n ; i++){
        sum=sum+i;
    }
    avg=sum/n;
    printf("%f",avg);
}
