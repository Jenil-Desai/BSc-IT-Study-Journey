#include <stdio.h>

int main() {
    int i, j, k, x;
    
    printf("Enter Starting Value: ");
    scanf("%d", &j);
    printf("+-+-+-+-+-+-+-+-+-+-+-+-+-+\n");

    printf("Enter Ending Value: ");
    scanf("%d", &k);
    printf("+-+-+-+-+-+-+-+-+-+-+-+-+-+\n");

    printf("Enter 1 for Odd or 2 for Even: ");
    scanf("%d", &x);
    printf("+-+-+-+-+-+-+-+-+-+-+-+-+-+\n");

    switch (x) 
    {
        case 1:
        {
            for (i = j; i >= k; i--) 
            {
                if (i % 2 == 1) 
                {
                    printf("\t%d", i);
                }
            }
            break;
        } 

        case 2:
        {
            for (i = j; i >= k; i--) 
            {
                if (i % 2 == 0) 
                {
                    printf("\t%d", i);
                }
            }
            break;
        }
        default:
            printf("\tInvalid Selection\nPlease select 1 for ODD or 2 for EVEN");
    }

    return 0;
}
