#include <stdio.h>
void main(){
    char x;
    printf("enter the character");
    scanf("%c",&x);
    if(x=='a'|| x=='e'|| x=='i' || x=='o'|| x=='u'){
        printf("given character is vowel");
    }
    else{
        printf("given character is consolunt");
    }
}