#include<stdio.h>
#include<conio.h>
main()
{
    int i,j,k;

    for ( i = 5; i >= 1; i--)
    {
        for ( j = 5; j <= i; j--)
        {
            printf("%d",i%2);
        }
        printf("\n");
        
    }
    return 0;
}