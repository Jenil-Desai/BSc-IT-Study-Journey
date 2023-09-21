#include<stdio.h>
#include<conio.h>
main()
{
    int a,b=0,c;

    for (c=1;c<=5;c++)
    {
        printf("Enter Value:");
        scanf("%d",&a);

        b=a+b;
    }
    
    printf("Total : %d",b);

    return 0;
}