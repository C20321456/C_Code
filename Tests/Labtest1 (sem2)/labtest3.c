/* 
Author: Mykolas Kubilius
Student number: C20321456
Date: 18/02/2021
Description: This code takes your inputted Celsius values and converts them into farhrenheit and also gets the avrage,
it also gets the Kelven as well plus it gives you the avrage of farhenheit and kelvin
*/

#include <stdio.h>
#define SIZE 5

float convert_temp(float []);
float in_Kelvin(float);

int main()
{
    float cel[SIZE];
    int i;
    float avrg;
    float kelvin;
    
    printf("\nEnter 5 tempretures in Celsius\n");

    for (i = 0; i < SIZE; i++)
    {
        scanf("%f", &*(cel + i));
    }
    
    avrg = convert_temp(cel);

    printf("\nThe avrage of your Celsius is %.1f", avrg);

    kelvin = in_Kelvin(avrg);

    printf("\nThe avrage if celsius in kelvin is %.1f", kelvin);

    return 0;
}

float convert_temp(float cel[])
{
    float fahr[SIZE];
    int i;
    float avrg = 0;
    float sum = 0;

    for (i = 0; i < SIZE; i++)
    {
        fahr[i] = ((cel[i] * 9) / 5) + 32;
    }

    for (i = 0; i < SIZE; i++)
    {
        printf("%.1f\n", fahr[i]);
    }

    for ( i = 0; i < SIZE; i++)
    {
        printf("\nyour Celsius is %.1f and in fahrenheit is %.1f", cel[i], fahr[i]);
    }

    for ( i = 0; i < SIZE; i++)
    {
        sum = sum + cel[i];
    }

    avrg = sum / (float)SIZE;
    
    return avrg;
}

float in_Kelvin(float celsius)
{
    float kel = 0;
    

    kel = celsius + 273;

    return kel;
    
}



