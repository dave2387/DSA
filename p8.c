#include <stdio.h>
int fact(int n){
    if(n==0||n==1){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}
int main(){
    int n,ans;
    printf("Enter the number for factorial");
    scanf("%d",&n);
    ans=fact(n);
    printf("%d",ans);
}