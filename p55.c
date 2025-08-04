// WAP to define a C structure named Student (roll_no, name, branch and
// batch_no) and also to access the structure members using Pointer.

#include <stdio.h>

struct student
{
    int Roll_no;
    char name[20];
    char branch[20];
    int batch_no;
};

void main()
{
    struct student s1;
    struct student * ptr = &s1;
    
    printf("Enter Roll_no : ");
    scanf("%d",&ptr->Roll_no);

    printf("Enter name : ");
    scanf("%s",ptr->name);

    printf("Enter Branch : ");
    scanf("%s",ptr->branch);

    printf("Enter Batch_no : ");
    scanf("%d",&ptr->batch_no);

    printf("%d\n",ptr->Roll_no);
    printf("%s\n",ptr->name);
    printf("%s\n",ptr->branch);
    printf("%d\n",ptr->batch_no);
}