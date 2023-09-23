#include<stdio.h>
#include<conio.h>
main()
{
    int i,j,k;

    for ( i = 5; i >= 1; i--)
    {
        for ( j = 1; j <= i; j++)
        {
            printf("%d",i%2);
        }

        for(k=5;k>=i;k--)
        {
            printf("%d",k);
        }
        printf("\n");
        
    }
    return 0;
}