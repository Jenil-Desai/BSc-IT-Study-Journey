#include<stdio.h>
#include<conio.h>
main()
{
    int i;

    for ( i = 1; i <= 7; i++)
    {
        textcolor(i);
        cprintf("Hello World");
    }
    
    return 0;
}