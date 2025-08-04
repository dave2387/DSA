// Removing starts from a string Problem

#include <stdio.h>
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

int stars(char str[])
{
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == '*')
        {
            pop();
        }
        else
        {
            push(str[i]);
        }
        
    }
    printf("Final string : ");
    for (int i = 0; i <= top; i++) {
        printf("%c", stack[i]);
    }
    return 0 ;
}

void main()
{

    char str[MAX];

    printf("Enter a string: ");
    scanf("%s", str);

    stars(str);
}