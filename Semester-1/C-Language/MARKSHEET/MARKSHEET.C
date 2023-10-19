#include<stdio.h>
#include<conio.h>
main()
{
    //Declaring Variables
    int a,b,c,d,e;
    float f;

    //Taking Values From User
    printf("Enter Marks of Maths :");
    scanf("%d",&a);
    printf("=========================\n");

    printf("Enter Marks of English :");
    scanf("%d",&b);
    printf("=========================\n");

    printf("Enter Marks of CF :");
    scanf("%d",&c);
    printf("=========================\n");

    printf("Enter Marks of C language :");
    scanf("%d",&d);
    printf("=========================\n");

    //Calculation of Total and Printing
    e=a+b+c+d;
    printf("Total Marks Obtained : %d",e);
    printf("\n=========================\n");

    //Percantage, Grade and Result processing and Printing
    f=(e/4)*100;

    if (a>33 && b>33 && c>33 && d>33)
    {
        printf("Percentage : %.2f \n",f);
        if (f>=35 && f<=48)
        {
            printf("Grade : E");
            printf("\nResult : Pass");
        }
        else if (f>=48 && f<=61)
        {
            printf("Grade : D");
            printf("\nResult : Pass");
        }
        else if (f>=61 && f<=74)
        {
            printf("Grade : C");
            printf("\nResult : Pass");
        }
        else if (f>=74 && f<=87)
        {
            printf("Grade : B");
            printf("\nResult : Pass");
        }
        else if (f>=87 && f<=100)
        {
            printf("Grade : A");
            printf("\nResult : Pass");
        }
        else
        {
            printf("Percentage : **");
            printf("\nGrade : ---");
            printf("\nResult : Fail");
        }
    }
    else
    {
        printf("Percentage : **");
        printf("\nGrade : ---");
        printf("\nResult : Fail");
    }
    return 0;
    
}
