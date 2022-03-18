#include  <stdio.h>

void stars(int, char);

int main()
{
    int num_stars = 1;
    char my_char;

    printf("how many characters do you wish to display?\n");
    scanf("%d", &num_stars);
    while(getchar() != '\n');

    printf("\nWhat character do you wish to see?\n");
    scanf("%c", &my_char);
    while(getchar() != '\n');

    stars(num_stars, my_char);
    
    return 0;

}

void stars(int num_stars, char my_ch)
{
    int i;

    for ( i = 0; i < num_stars; i++)
    {
        printf("%c", my_ch);
    }
    
}