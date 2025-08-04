#include<stdio.h>
void main(){
    int day,year,week,days;
    printf("enter the number of days");
    scanf("%d",&days);
    year=days/365;
    days= days-(year*365); 
    week=days/7;
    days=days-(week*7);
    day=days;
    printf("%d %d %d", year,week,day);
}