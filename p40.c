// Vowel Anxiety Problem

#include <stdio.h>
#include <string.h>
#include <ctype.h>

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

// Reverse the characters currently in the stack
void reverseStack()
{
    int start = 0;
    int end = top;
    while (start < end)
    {
        char temp = stack[start];
        stack[start] = stack[end];
        stack[end] = temp;
        start++;
        end--;
    }
}

// Check if a character is a vowel
int isVowel(char ch)
{
    ch = tolower(ch); // makes it case-insensitive
    return (ch == 'a' || ch == 'e' || ch == 'i' ||
            ch == 'o' || ch == 'u');
}

int main()
{
    char str[MAX];

    printf("Enter a string: ");
    scanf("%s", str);  // only one word, no spaces

    for (int i = 0; i < strlen(str); i++)
    {
        push(str[i]);

        if (isVowel(str[i]))
        {
            reverseStack(); // reverse current stack if vowel found
        }
    }

    printf("Final string: ");
    for (int i = 0; i <= top; i++)
    {
        printf("%c", stack[i]);
    }

    printf("\n");
    return 0;
}
