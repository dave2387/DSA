#include<stdio.h>
void main(){
    int y;
    printf("enter a year");
    scanf("%d",&y);
    if((y%4==0 && y%100!=0)||(y%400==0)){
        printf("given year is leap year");
    }
    else{
        printf("given year is not a leap year");
    }
}