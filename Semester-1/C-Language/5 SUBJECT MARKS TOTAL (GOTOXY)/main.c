#include<stdio.h>
#include<conio.h>
main()
{
    int i,x,sum;

    printf("Enter Subject 1:\n");
    printf("Enter Subject 2:\n");
    printf("Enter Subject 3:\n");
    printf("Enter Subject 4:\n");
    printf("Enter Subject 5:\n");
    printf("\n----------------------");
    printf("Total          :");
    
    for(i=1;i<=5;i++)
    {
        gotoxy(15,i);
        scanf("%d",&x);

        sum=sum+x;

        gotoxy(15,7);
        printf("%d",sum);
    }

    return 0;

}