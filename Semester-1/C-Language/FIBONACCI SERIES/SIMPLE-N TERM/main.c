#include<stdio.h>
#include<conio.h>
main()
{
    int i,x;
    int t1=0,t2=1;
    int nextTerm = t1 + t2;

    printf("Enter Value : ");
    scanf("%d",&x);

    printf("%d, %d, ",t1,t2);
    for (i = 3; i<x; ++i)
    {
        printf("%d, ",nextTerm);
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }
    
    return 0;
}
