#include<stdio.h>
#include<conio.h>
main()
{
    int i,j,;

    for ( i = 1; i <= 5; i++)
    {
        for ( j = 1; j <= i; j++)
        {
            printf("%d",j%2);
        }
        printf("\n");
    }
    return 0;
}