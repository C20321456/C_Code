#include <stdio.h>

int find_min(int, int);
int find_max(int, int);

int main()
{
    int number1, number2;

    printf("Enter two whole numbers\n");
    
    scanf("%d", &number1);
    while(getchar() != '\n');

    scanf("%d", &number2);
    while(getchar() != '\n');

    printf("\nThe highest value is %d", find_max(number1, number2));
    printf("\nThe lowest value is %d", find_min(number1, number2));

    return 0;
}

int find_min(int wholenum1, int wholenum2)
{
    if (wholenum1 < wholenum2)
    {
        return wholenum1;
    }
    else
    {
        return wholenum2;
    }
}

int find_max(int wholenum1, int wholenum2)
{
    if (wholenum1 > wholenum2)
    {
        return wholenum1;
    }
    else
    {
        return wholenum2;
    }
    
    
}