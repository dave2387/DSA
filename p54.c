// 54. WAP to check whether the string is Palindrome or not using Pointer.


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){

    char *ptr = (char *)malloc(100*sizeof(char));

    printf("Enter string : ");
    scanf("%s",ptr);
    char *temp = (char *)malloc(strlen(ptr) + 1);
    strcpy(temp, ptr);      
    strrev(temp);           
    printf("reversed string : %s \n",temp);

    if(strcmp(temp,ptr)==0){
       printf("String is palindrome...");
    }
    else{
        printf("String is not palindrome...");
    }
    free(ptr);
    free(temp);
    return 0;
}