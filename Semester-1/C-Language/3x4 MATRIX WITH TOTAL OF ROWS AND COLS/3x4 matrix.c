#include<stdio.h>
int main()
{
    int x[12],count=0;
    for (int i = 0; i < 12; i++)
    {
        printf("Enter Value [%d] : ",i+1);
        scanf("%d",&x[i]);
    }
    for (int i = 0; i < 13; i++)
    {
        if (count==4)
        {
            printf(" %d\n",x[0]+x[1]+x[2]+x[3]);
        }
        if (count==8)
        {
            printf(" %d\n",x[4]+x[5]+x[6]+x[7]);
        }
        if (count==12)
        {
            printf(" %d\n",x[8]+x[9]+x[10]+x[11]);
            printf("%d\t%d\t%d\t%d\t%d",x[0]+x[4]+x[8],x[1]+x[5]+x[9],x[2]+x[6]+x[10],x[3]+x[7]+x[11],x[0]+x[4]+x[8]+x[1]+x[5]+x[9]+x[2]+x[6]+x[10]+x[3]+x[7]+x[11]);
        }
        printf("%d\t",x[i]);
        count++;
    }
    return 0;
}