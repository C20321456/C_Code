#include <stdio.h>

int find_even(int);

int main()
{
    int number;

    printf("Enter a number\n");
    scanf("%d", &number);

    if (find_even(number) == 0)
    {
        printf("\nYour number is even");
    }
    else
    {
        printf("\nYour number is odd");
    }
    return 0;

}

int find_even(int num)
{
    return num % 2;
}