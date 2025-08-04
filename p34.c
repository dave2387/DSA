//  34. Write a menu driven program to implement following operations on the Stack
//  using an Array
//  • PUSH, POP, DISPLAY
//  • PEEP, CHANGE

#include <stdio.h>
#define max 100

int top = -1;
int stack[max];

void push()
{
    int x;
    printf("Enter the value of x: ");
    scanf("%d", &x);

    if (top >= max - 1)
    {
        printf("Stack overflow");
        return;
    }
    else
    {
        top++;
        stack[top] = x;
        printf("%d is pushed.\n", x);
    }
}

int pop()
{

    if (top == -1)
    {
        printf("Stack underflow....!!!");
    }
    else
    {
        return (stack[top--]);
    }
}

int peep()
{
    int i;
    printf("Enter the place of element : ");
    scanf("%d", &i);

    if(top-i+1 <=0){
        printf("stack underflow !!!!");
        return 0 ;
    }else{
        return(stack[top-i+1]);
    }
}

int change(){
     int i,x;
    printf("Enter the place of element : ");
    scanf("%d", &i);
    printf("Enter the value of X to change : ");
    scanf("%d", &x);

    if(top-i+1 <=0){
        printf("Stack underflow !!!!");
        return 0;
    }else{
        stack[top-i+1] = x;
        return stack[top-i+1];
    }
}

void display()
{
    if (top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Stack elements : ");
        for (int i = top; i >= 0; i--)
        {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

void main()
{
    while(1){
        printf("Enter 1 to push\n");
        printf("Enter 2 to pop\n");
        printf("Enter 3 to peep\n");
        printf("Enter 4 to change\n");
        printf("Enter 5 to display\n");
        printf("Enter 0 to exit\n");

        int a;
        printf("Enter the value of a :");
        scanf("%d",&a);

        switch(a){
            case 1: push();
                    break;
            case 2: pop();
                    break;
            case 3: peep();
                    break;
            case 4: change();
                    break;
            case 5: display();
                    break;
            default :
            if(a==0){
                break;
            }
        }
    }
}