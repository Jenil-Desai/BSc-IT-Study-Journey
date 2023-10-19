#include<stdio.h>
#include<ctype.h>
int main()
{
    char x;
    printf("Enter Charcher : ");
    scanf("%c",&x);
    if (isalpha(x))
    {
        if (islower(x))
        {
            printf("This is Lower Alphabet.");   
        }
        else if (isupper(x))
        {
            printf("This is Higher Alphabet.");
        }
        
    }
    else if (isdigit(x))
    {
        printf("This is Digit.");
    }
    else if (isspace(x))
    {
        printf("This is Space.");
    }
    else if (ispunct(x))
    {
        printf("This is Special Symbol.");
    }
    else
    {
        printf("Invalid Input");
    }
    return 0;
}