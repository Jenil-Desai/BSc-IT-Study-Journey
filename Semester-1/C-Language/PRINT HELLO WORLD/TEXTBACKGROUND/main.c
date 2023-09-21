#include<stdio.h>
#include<conio.h>
main()
{
    int i;

    for ( i = 1; i <= 7; i++)
    {
        textbackground(i);
        cprintf("Hello World");
    }
    
    return 0;
}