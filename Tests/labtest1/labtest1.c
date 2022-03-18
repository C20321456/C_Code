//Author: Mykolas Kubilius
//Date: 09//11/2020
//Compiler: Visual studio code
//This is a program that generates a random number between 1-10 and the user inputs a number and the code checks if they are the same

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int randNum = 0;
    int inputNum = 0;
    int same = 0;
    int diff = 0;
    int trys = 5;


   while (trys != 0) //This while runs the loop until the var trys reaches 0
   {    
        fflush(stdin);
        
        printf("\nGenerating a random number between 1-10\n");
        //num is assigned a random number generated between 1-10
        randNum = rand() % 10 + 1;

        //display the random number generated
        printf("%d\n", randNum);
        scanf("%d", &inputNum);
        
        if (inputNum > 0 && inputNum > 10) //This if checks the number inputed if it is between 1-10
        {
            printf("\nNumber is not between 10 and 1\n");
        }
        else
        {
            printf("\nNumber is between 1-10\n");
        }
        
    
        if (randNum == inputNum) //This if checks the random number if it is the same as the number inpputed
        {
            printf("\nthey are the same\n");
            same = same + 1;
            
        }
        else
        {
            printf("\nThey are not the same\n");
            diff = diff + 1;
        }
        
        
        trys = trys - 1; //the var takes away 1 from it and starts the loop again because var isnt 0 yet
    }   
     
    printf("Same: %d", same);
    printf("\nNot same: %d", diff);
    
    
    return 0;
} //end main