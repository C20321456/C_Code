#include <stdio.h>

int main()
{
    int num[4];
    int i;

    printf("Enter 4 numbers:\n");
    
    for ( i = 0; i < 4; i++)
    {
        scanf("%d", &num[i]);
    }

    printf("Normal:\n");
    for ( i = 0; i < 4; i++)
    {
        printf("%d", num[i]);
    }

    num[0] = num[1];
    num[1] = num[0];
    num[2] = num[3];
    num[3] = num[2];

    printf("\nReversed:\n");
    for ( i = 0; i < 4; i++)
    {
        printf("%d", num[i]);
    }
    
    
    return 0;
}