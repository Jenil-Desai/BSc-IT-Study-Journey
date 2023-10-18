#include<stdio.h>
#include<string.h>
int main()
{
    char name[20];
    printf("Enter Name : ");
    scanf("%s",name);
    for (int i = 0; i < strlen(name); i++)
    {
        printf("\n%s",name);
    }

}