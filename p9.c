#include<stdio.h>
void main(){
    int base,ans=1,i;
    int power;
    printf("Enter the base and power");
    scanf("%d %d",&base,&power);
    for(i=1;i<=power;i++){
        ans=ans*base;
    }
    printf("%d",ans);
}






