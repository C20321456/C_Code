
// Author: Mykolas Kubilius
// Student number: C20321456
// Date started: 19/02/2021
// Date finished: 20/02/2021
// Software used: Visual Studio Code
// Langauge used to make this code: C

// This is a program designed to encrypt your entered code, it can also decrypt your encrypted code.
// it can also calculate how many times the encrypted code was matching the authorised code successfully and incorrectly.


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdbool.h>


#define SIZE 4                                          //this sets the size of the array allowing me to use the SIZE to tell an array its got to have 4 free spaces.

void printMenu(void);                                   //this is a function that prints out the menu.
int user_code(int *);
int encrypt_code(int *, int *, int *);
int decrypt_code(int *);
int count(int , int );

int main()
{
    char menu;
    int input_code[SIZE];
    int decrypted_code[SIZE];
    int wrongcode;                                      //these are the variables i've declared.
    int rightcode;
    int i;
    bool is_code_correct;                               //the bool is a data type known as a boolean.
    bool is_code_successful;
    bool is_code_encrypted;
    bool is_code_decrypted;
    int code;

    wrongcode = 0;                                      //the wrongcode and rightcode will be used as counters so right now they are 0
    rightcode = 0;

    is_code_encrypted = false;                          //at the start of the program these are all false because they are not encrypted nor decrypted
    is_code_decrypted = false;
    
    do                                                  //this do loop will keep repating itself unless a ceratin condition is met in order to break the loop, in this case its the number 5.
    {
        printMenu();                                    //this calls the function and prints out whatever was written in the function, in this case its the menu.
        fflush(stdin);                                  //this flushes and empties out the terminal giving it a fresh slate on each passing loop.

        menu = getchar();                               //this allows the user to only input one character and not have to push the enter key.
        
        switch (menu)                                   //this switch case looks for the character youve inputted in the variable menu and trys to find if any case matches your input.
        {
            case '1':                                   //if you input number 1 in the menu this case executes.
            {
                user_code(input_code);
                is_code_encrypted = false;              //when entering a new code, the code is not encryped nor decrypted so they are set to false
                is_code_decrypted = false;
                
                while(getchar() != '\n');
                break;  
            }

            case '2':                                                       //if your input in the menu was 2, this case executes 
            {
                if (is_code_encrypted)                                      //this checks if the statment is true, if it is true, it breaks the loop entierly.
                {
                    printf("\nThe code is already encrypted\n\n");
                    break;
                }
                
                is_code_decrypted = false;                                  //if your code is decrypted then is false because we are encrypting the code

                encrypt_code(input_code, &rightcode, &wrongcode);           //function calls and it brings the input code with the encryption and the counters for the amout of times the input matches or does not match with he authorised code

                is_code_encrypted = true; 

                while(getchar() != '\n');
                break;            
            }
            
            case '3':
            {
                if (is_code_decrypted)                                                                       //this checks to see if your code is already decryped and if its true, it breaks out of the loop entierly.
                {
                    printf("\n\nThe code is already decrpyted\n\n");
                    break;
                }
                
                is_code_encrypted = false;                                                                  //if the code is encrypted then its set to false because we are decrypting it

                decrypt_code(input_code);                                                                   //function calls and it brings your decrypted code
                
                is_code_decrypted = true;                                                                   //this sets the boolean is_code_decrypted to true and it will be needed when you click the 2nd menu again.
                break;   
            }
            
            case '4':
            {
               count(rightcode, wrongcode);                                                                 //function calls and it brings the counter in showing the amount of times your code matched or did not match with the authorised code
               break;
            }

            case '5':
            {
                break;                                                                                      //if you press 5 in the menu options. nothing will happen here, it will simply break and exit the program since you pressed 5.
            }

            default:                                                                                        //If you entered anything that is not 1,2,3,4,5 (the case's) this prints and the loop breaks.
            {
                printf("\nPlease Enter the right number to access the menu\n");                             //this displayes the error message if you pressed anything else thats not 1,2,3,4,5 (the case's)
                break;
            }
        }
    }
    while (menu != '5');                                                                                    //while your input for the menu options is not a 5, the do loop keeps repeating until you pressed 5.
    printf("\n\nThanks for using this program!"); 
    

 sleep(2);                                                                                                  //this pauses the program for 2 seconds before exiting, making it a gracefull termination.
 return 0;
}

void printMenu(void)                                                                                        //this is my function, it is used to print out the menu and it gets called in the int main().
{
    printf("\n1: Enter any code\n2: Encrypt code entred and verify if correct\n3: Decrypt code\n4: Display the number of times encrypted code entered matches the authorised code (i) Successfully (ii) Incorrectly\n5: Exit program\n\n");
    printf("Please enter the number represented in the menu and press enter!\n");
}

int user_code(int *input_code)
{
    bool input_not_successful = true;
    int digit;
    int i = 0;
    char input_char;

    while (input_not_successful)
    {
        printf("\n(%d) digit: ", i+1);    //this prints out the string and also the variable digit.
        input_char = getch();             //getch only allows you to enter one character.
        printf("%c", input_char);
        
        if (input_char == '0' || input_char == '1' || input_char == '2' || input_char == '3' || input_char == '4' || input_char == '5' || input_char == '6' || input_char == '7' || input_char == '8' || input_char == '9') //this if statment checks that your input code is 1,2,3,4,5,6,7,8,9 or 0. anything that is not a number will give you an error
        {
            *(input_code + i) = atoi(&input_char);  //atoi changes a char to an int. so for line 143, I used a char variable and made things simpler for myself with the error cehcking
            i++;
            if (i == 4)
            {
                input_not_successful = false;
                printf("\n\nCode entered successfully!");   //if your input has only numbers then your code is successful
            }       
        }
        else
        {
            printf("\nCode should only contain numbers. no characters!\n"); //error message will be dislayed if you enter in a character
        }
        
    }
}

int encrypt_code(int *input_code, int *rcode, int *wcode)
{
    int encrypted_code[SIZE];
    int access_code[SIZE];
    int i;
    bool is_code_correct;

    access_code[0] = 4;
    access_code[1] = 5;
    access_code[2] = 2;                                 //this is the access code array holding the numbers 4523 in each allocated space.
    access_code[3] = 3;
    
            

    int temp = *(input_code + 0);                               //from lines 178 and 184, the code is swapping the two specific elements in the array, by doing so we place an element in an empty variable and place another element in its position before putting the element in the other elements last space.
    *(input_code + 0) = *(input_code + 2); 
    *(input_code + 2)  = temp;
                                                    
    int temp2 = *(input_code + 1);
    *(input_code + 1) = *(input_code + 3);
    *(input_code + 3) = temp2;

    for (i = 0; i < SIZE; i++)
    {
        *(input_code + i) = *(input_code + i) + 1;              //this gives each element a plus 1.
                    
        if (*(input_code + i) == 10)                            //this if statment checks if any element in the array input_code has a number equal to 10.
        {
            *(input_code + i) = 0;                              //if an element has a 10, it gets changed to a 0.
        }
    }
                
    printf("\n\nYour encrypted code is:");

    for (i = 0; i < SIZE; i++)
    {
         printf("%d", *(input_code + i));                                                    //this prints out your encrypted code.
    }
                

    is_code_correct = true;                                                                     //this boolean assumes your input_code is correct.
                
    for (i = 0; i < SIZE; i++)
    {
        if (*(input_code + i) != *(access_code + i))                                            //this checks to see if the input_code is not equal to the access_code.
        {
            is_code_correct = false;                                                            //the boolean becomes false if the loop is executed.
            printf("\n\nThe code is not the same as the authorised access code!\n");            //this prints the error message and breaks the loop.
                        
            *wcode = *wcode + 1;                                                          //this counts the amount of times you entred the code inncorectly.
            break;
        }
    }
                
    if (is_code_correct)                                                                        //if the boolean remains true then this gets executed.
    {
        printf("\n\nThe code matches with the authorised access code!\n");                      //a message prints saying your code was successfully entered
                    
        *rcode = *rcode + 1;                                                              //this counts the amount of times you entred your code correctly
    }
}

int decrypt_code(int *input_code)
{
    int i;
    
    for ( i = 0; i < SIZE; i++)
    {
        *(input_code + i) = *(input_code + i) - 1;
                    
        if (*(input_code + i) == -1)                                                            //this loop checks if any number is -1 and it changes it into a 9              
        {
            *(input_code + i) = 9;                              
        }
    }
                
    int temp3 = *(input_code + 0);                                                              //from lines 240 and 246, the code is swapping the two specific elements in the array, by doing so we place an element in an empty variable and place another element in its position before putting the element in the other elements last space.
    *(input_code + 0) = *(input_code + 2); 
    *(input_code + 2)  = temp3;
                                                    
    int temp4 = *(input_code + 1);
    *(input_code + 1) = *(input_code + 3);
    *(input_code + 3) = temp4;
                
    printf("\n\nYour decrypted code is:");

    for (i = 0; i < SIZE; i++)
    {
        printf("%d", *(input_code + i));                                                    //this prints out your decrpyed code.
    }

    printf("\n\n");
}

int count(int rightcode, int wrongcode)
{
    printf("\n(i) Amount of times Successfully entred: %d", rightcode);
    printf("\n(ii) Amount of times incorrectly entred: %d", wrongcode);                     //this prints out the amount of times you entered the code correctly and incorrectly.     
    printf("\n\n");
}