#include <stdio.h>

void stars(int);

int main()
{
    int num_stars = 0;

    printf("how many stars do you want to display here?\n");
    scanf("%d", &num_stars);
    while (getchar() != '\n');

    stars(num_stars);

    return 0;
}

void stars (int my_stars)
{
    int i;

    for ( i = 0; i < my_stars; i++)
    {
        printf("*");
    }
}