//the malloc function

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int numbers = 0;
    int no_bytes = 0;
    int i;

    printf("\nhow many numbers will you enter?\n");
    scanf("%d", &numbers);

    no_bytes = numbers * sizeof(int);

    ptr = malloc(no_bytes);

    if(ptr == NULL)
    {
        printf("\nfailed to allocate memory\n");
    }
    else
    {
        printf("\nMemeory allocated successfully\n");
        printf("\nEnter the set of %d numbers\n", numbers);
    }
    
    for ( i = 0; i < numbers; i++)
    {
        printf("%d\n", *(ptr + i));
    }
    
    free(ptr);

    return 0;
}