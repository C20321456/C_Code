#include <stdio.h>
#include <stdlib.h>

int main()
{
    char chars[7] = {'a', ' ', 'b', 'c', ' ', ' ', 'd' };
    int *ptr;
    int i;
    
    ptr = malloc(sizeof(int));

    *ptr = 7;

    for ( i = 0; i < chars; i++)
    {
        printf("%d\n", *(ptr + i));
        printf(" '_' ");
    }

}