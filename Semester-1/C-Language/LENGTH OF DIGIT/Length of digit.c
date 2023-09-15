#include<stdio.h>
#include<conio.h>
main()
{
    int x,y,rm;

    printf("Enter Value:");
    scanf("%d",&x);

    while (x!=0)
    {
        y=y+rm;
        rm=x%10;
        x=x/10;
    }
    printf("Your Given Digit's length is %d",y);
    return 0;
}
