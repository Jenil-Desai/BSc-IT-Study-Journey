#include <stdio.h>

int main() 
{
    int i, j, count = 0;
    char name[20];
    printf("Enter Name : ");
    scanf("%s", name);
    // Calculating the length of the string
    while (name[count] != '\0') 
    {
        count++;
    }
    for (i = 0; i < count; i++) 
    {
        for (j = 0; j <= i; j++) 
        {
            printf("%c", name[j]);
        }
        printf("\n");
    }
    return 0;
}
