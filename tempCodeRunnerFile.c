#include<stdio.h>
#include<conio.h>
void main()
{
    int i=0,count=0;
    char name[25];

    printf("Enter Name : ");
    scanf("%s",name);

    while(name[i]!=NULL)
    {
        count++;
        i++;
    }
    for(i=0;i<count;i++)
    {
        printf("\n%s",name);
    }
    getch();
}