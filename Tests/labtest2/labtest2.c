//Author: Mykolas Kubilius
//Date: 07/12/2020
//Compiler: Visual Studio Code
//Test: labtest2

//This program helps you to find miles per gallon in each array element, by taking your input values for gallons and miles and divide them.

#include<stdio.h>
#define SIZE 5 //defines the size of the array

int main()
{
    float gallons[SIZE]; //initilizing the array for gallons
    float miles[SIZE]; //initilizing the array for miles
    float mpg[SIZE]; ////initilizing the array for mpg
    
    int i;
    

    printf("Enter %d numbers for Gallons\n", SIZE); //this for loop inputs the values for each array element until it reaches the assigned array size
    for ( i = 0; i < SIZE; i++)
    {
        scanf("\n%f", & *(gallons + i)); //inputs numbers using pointer notations only
    }

    printf("\nEnter your 5 numbers for Miles\n"); ////this for loop inputs the values for each array element until it reaches the assigned array size
    for ( i = 0; i < SIZE; i++)
    {
        scanf("\n%f", & *(miles + i)); //inputs numbers using pointer notations only
    }
    
    for ( i = 0; i < SIZE; i++) //this loop takes your inputed values in the array miles and gallons on each element and it divides the numbers before taking that divided number and it puts it in each array element for mpg
    {
        *(mpg + i) = *(miles + i) / *(gallons + i); //the formula used to divide each of the array elements for miles and gallons
    }

    for ( i = 0; i < SIZE; i++) //this for loop prints out the divided number from each array element in the mpg array
    {
        printf("\nElement %d is equal to %f", i, *(mpg + i));
    }
    
    return 0;

}