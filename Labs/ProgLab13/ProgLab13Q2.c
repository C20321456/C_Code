#include <stdio.h>

float averageNum(int, int, int);

int main()
{
    int num1, num2, num3;

    printf("Enter 3 number\n");
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);

    printf("The average of %d %d %d is %.2f", num1, num2, num3, averageNum(num1, num2, num3));

    return 0;
}

float averageNum(int n1, int n2, int n3)
{
    float avrg;

    avrg = (n1 + n2 + n3) / 3.0f;

    return avrg;
}