#include<stdio.h>
#include<conio.h>
main()
{
    int i,j;

    for (i = 1; i <= 5; i++)
    {
        for ( j = i; i >= 1; j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    

    return 0;
}
