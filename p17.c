//calculate sum of numbers from m to n 
#include<stdio.h>
void main(){
    int first,last,ans=0;
    printf("enter the numbers first and last:");
    scanf("%d %d", &first, &last);
    for(int i=first ; i<=last ; i++){
        ans=ans+i;
    }
    printf("%d",ans);
}