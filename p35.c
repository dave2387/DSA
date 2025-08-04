// 35. How stack can be used to recognize strings aca, bcb, abcba, abbcbba? Write a
// program to solve the above problem.

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

int recognize(char str[])
{
    int i = 0;

    push('c');

    while (str[i] != '\0' && str[i] != 'c')
    {
        push(str[i]);
        i++;
    }

    if (str[i] != 'c')
    {
        printf("no c found\n");
        return 0;
    }

    i++;

    while (str[i] != '\0')
    {
        char popout = pop();
        if (popout != str[i])
        {
            return 0;
        }
        i++;
    }

    if (top == 0 && stack[top] == 'c') {
        return 1;
    }

    return 0;
}

int main()
{
    char str[MAX];

    printf("Enter a string: ");
    scanf("%s", str);

    if (recognize(str))
    {
        printf("'%s' is a valid.\n", str);
    }
    else
    {
        printf("'%s' is a invalid.\n", str);
    }

    return 0;
}
