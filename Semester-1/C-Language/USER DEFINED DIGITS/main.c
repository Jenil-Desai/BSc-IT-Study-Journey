#include<stdio.h>
#include<conio.h>
main()
{
    int a,b,i;

    printf("Enter Starting Value:");
    scanf("%d",&a);

    printf("Enter Ending Value:");
    scanf("%d",&b);

    for (i=a;a<=b;a++)
    {
        printf("\t%d",a);
    }
    getch();
    return 0;
}