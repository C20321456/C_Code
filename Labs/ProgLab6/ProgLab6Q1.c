#include <stdio.h>

int main()
{
    int numbers[5];
    int numcopy[5];
    int i;
    

    printf("Input 5 numbers:\n");

    for ( i = 0; i < 5; i++)
    {
        scanf("%d\n", &numbers[i]);
    }

    for ( i = 0; i < 5; i++)
    {
        printf("%d\n", numbers[i]);
    }

    for ( i = 0; i < 5; i++)
    {
        numcopy[i] = numbers[i];
    }

    for ( i = 0; i < 5; i++)
    {
        printf("%d\n", numcopy[i]);
    }
    
    

    return 0;
}