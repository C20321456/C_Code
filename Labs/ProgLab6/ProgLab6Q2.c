#include <stdio.h>

int main()
{
    float fah[3];
    int i;
    float cel[3];

    printf("Input 3 values:\n");

    for ( i = 0; i < 3; i++)
    {
        scanf("%f", &fah[i]);
    }
    
    printf("\nFahrenheit:");
    printf("\n%0.1f", fah[0]);
    printf("\n%0.1f", fah[1]);
    printf("\n%0.1f\n", fah[2]);

    printf("Celsius:\n");
    cel[0] = (fah[0]- 32.0)*(5.0/9.0);
    printf("%0.2f\n", cel[0]);

    cel[1] = (fah[1]- 32.0)*(5.0/9.0);
    printf("%0.2f\n", cel[1]);

    cel[2] = (fah[2]- 32.0)*(5.0/9.0);
    printf("%0.2f\n", cel[2]);
    


    return 0;
}