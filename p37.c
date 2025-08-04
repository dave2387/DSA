// Valid Parenthesis Problem

#include<stdio.h>
#include <string.h>

#define MAX 100

int top = -1;
char stack[MAX];

void push(char x)
{
    if (top >= MAX - 1)
    {
        printf("Stack overflow\n");
    }
    else
    {
        stack[++top] = x;
    }
}

char pop()
{
    if (top < 0)
    {
        return 0;
    }
    else
    {
        return stack[top--];
    }
}

int parenthesis(char str[]){
    for(int i = 0 ; i < strlen(str) ; i++){
        if(str[i] == '{' || str[i] == '[' || str[i] == '('){
            push(str[i]);
        }
        else if(str[i] == '}'){
            char x = pop();
            if(x != '{'){
             return 0;
            }
        }
        else if(str[i] == ']'){
            char x = pop();
            if(x != '['){
                return 0;
            }
        }
        else if(str[i] == ')'){
            char x = pop();
            if(x != '('){
                return 0;
            }
        }
        else {
            printf("Please Enter brackets only!!");
            return 0;
        }
    }

    return top == -1;
}

void main(){

    char str[MAX];

    printf("Enter a string: ");
    scanf("%s", str);

    if(parenthesis(str)){
        printf("Valid");
    } else{
        printf("invalid");
    }
    
}