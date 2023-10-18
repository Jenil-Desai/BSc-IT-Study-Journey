#include<stdio.h>
int main()
{
    int x[10],i,max=0;
    for (i = 0; i < 10; i++)
    {
        printf("Enter Value : ");
        scanf("%d",&x[i]);
        if (x[i]>max)
        {
            max=x[i];
        }
    }
    printf("Maximum Value : %d",max);
    
}