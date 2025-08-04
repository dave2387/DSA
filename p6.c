#include<stdio.h>
void main(){
    int hh,mm,ss,sec;
    printf("enter the number of sec");
    scanf("%d",&sec);
    hh=sec/3600;
    sec= sec-(hh*3600);
    mm=sec/60;
    sec=sec-(mm*60);
    ss=sec;
    printf("%d %d %d", hh,mm,ss);
}