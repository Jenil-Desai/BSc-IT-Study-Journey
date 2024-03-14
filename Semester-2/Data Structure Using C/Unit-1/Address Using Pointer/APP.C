#include<stdio.h>
#include<conio.h>
void main()
{
    int val1 = 10, *ptr1;
    clrscr();

    ptr1 = &val1;

    printf("\t\t\tPrint Value & Address Using Pointer");
    printf("\n\t\t\t===================================");

    printf("\n\nValue Using Normal    : %d",val1);
    printf("\nAddress Using Normal  : %u",&val1);

    printf("\n\nValue Using Pointer   : %d",*ptr1);
    printf("\nAddress Using Pointer : %u",ptr1);

    getch();
}