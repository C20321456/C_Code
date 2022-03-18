// Author: Mykolas Kubilius C20321456
// Date started: 05//11//2020
// Date finished: 06//11/2020
// Software used: Visual studio code
// Langauge: C
// This is a simple  program to enable bank customers to manage their Personal Identification Number (PIN) on an Automated Teller Machine (ATM)
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{   //These are just variables I assaigned.
    char bankmenu = ' ';
    char pindigit1, pindigit2, pindigit3, pindigit4;
    char input1 = ' ';
    char input2 = ' ';
    char input3 = ' ';
    char input4 = ' ';
    char pinv1 = ' ';
    char pinv2 = ' ';
    char pinv3 = ' ';
    char pinv4 = ' ';
    int pinwrong;
    int pinright;
    
    //This is the default pin.
    pindigit1 = '1';
    pindigit2 = '2';
    pindigit3 = '3';
    pindigit4 = '4';
    
    //This shows how many times you entered the pin right or wrong. Right now it is zero.
    pinwrong = 0;
    pinright = 0;

    do //Do loop does everything in the loop until the while condition is met
    {   
        //This is the messeage you get when starting the code. The message is the menu.
        printf("\n1: Enter your pin\n2: Change pin\n3: Display the number of times the pin was entered correctly and incorrectly\n4: Exit\n\n");
        printf("Enter the number represented on the menu to select it, then press enter\n");
        fflush(stdin); //The flush here clears the buffer as it loops to make sure it is clean when your going to enter your option.
        
        bankmenu = getchar(); //This asks you to enter only one character, and that character becomes the vairable bankmenu.

        switch (bankmenu) //This is a Switch statment
        {
            case '1': //If the input you made in bankmenu is '1' then it does this loop
            {
                fflush(stdin); //clears the buffer
           
                printf("\nWelcome, please enter your pin: "); //This asks you to input the pin, each input holds one char.
                input1 = getch();
                printf("%c", input1);
                
                input2 = getch();
                printf("%c", input2);
            
                input3 = getch();
                printf("%c", input3);
            
                input4 = getch();
                printf("%c", input4);
            
                //This if statment means if the pin you entered is the same as the pindigit (Right now the digit are 1234).
                if((input1 == pindigit1) && (input2 == pindigit2) && (input3 == pindigit3) && (input4 == pindigit4))
                {
                    printf("\nCorrect\n"); //Do this if the above statment is true.
                    pinright = pinright + 1;
                }
                else
                {
                    printf("\nWrong"); //else if it is not equaled then do this. then when its not equaled (meaning wrong) the 0 pinwrong gets a 1 added. it does this everytime the pin you entered is wrong.
                    pinwrong = pinwrong + 1;
                }
            
                break; //breaks the loop and goes back to the switch     
            }

            case '2': //if '2' was inputed, do this loop
            {
                fflush(stdin); //clears buffer

                printf("\nEnter new pin. Must be numbers!: "); //asks you to input a new pin
                
                //since the pindigits are 1234, anything new you input gets overwritten. Gone forever and the new input becomes pindigits.
                pindigit1 = getch();
                printf("%c", pindigit1);
                
                pindigit2 = getch();
                printf("%c", pindigit2);

                pindigit3 = getch();
                printf("%c", pindigit3);

                pindigit4 = getch();
                printf("%c", pindigit4);

                //This if statment checks that you only inputted numbers (so 0,1,2,3,4,5,6,7,8,9)
                if ((pindigit1 == '0' || pindigit1 == '1' || pindigit1 == '2' || pindigit1 == '3' || pindigit1 == '4' || pindigit1 == '5' || pindigit1 == '6' || pindigit1 == '7' || pindigit1 == '8' || pindigit1 == '9') && (pindigit2 == '0' || pindigit2 == '1' || pindigit2 == '2' || pindigit2 == '3' || pindigit2 == '4' || pindigit2 == '5' || pindigit2 == '6' || pindigit2 == '7' || pindigit2 == '8' || pindigit2 == '9') && (pindigit3 == '0' || pindigit3 == '1' || pindigit3 == '2' || pindigit3 == '3' || pindigit3 == '4' || pindigit3 == '5' || pindigit3 == '6' || pindigit3 == '7' || pindigit3 == '8' || pindigit3 == '9') && (pindigit4 == '0' || pindigit4 == '1' || pindigit4 == '2' || pindigit4 == '3' || pindigit4 == '4' || pindigit4 == '5' || pindigit4 == '6' || pindigit4 == '7' || pindigit4 == '8' || pindigit4 == '9'))
                {
                    //If you input the number and not a character, this begins
                    printf("\nEnter the pin again to verify:");
                    
                    //The pinv is now a new vaiable, hasnt been used before until now. so whatver you put in the pinv, it becomes pinv
                    pinv1 = getch();
                    printf("%c", pinv1);
                
                    pinv2 = getch();
                    printf("%c", pinv2);

                    pinv3 = getch();
                    printf("%c", pinv3);

                    pinv4 = getch();
                    printf("%c", pinv4);

                    //If pindigits you entered at the start are the same as the pinvs you entered above.
                    if ((pindigit1 == pinv1) && (pindigit2 == pinv2) && (pindigit3 == pinv3) && (pindigit4 == pinv4))
                    {
                        //if pindigits are equaled to pinvs this happens
                        printf("\nNew pin made!\n");
                        pindigit1 = pindigit1; //the pindigits get overwritten an whatever you entered at the start gets set as pindigits
                        pindigit2 = pindigit2;
                        pindigit3 = pindigit3;
                        pindigit4 = pindigit4;
                        break; //breaks the loop
                    }
                    else
                    {   //if pindigits are no equaled to pinvs then this happens.
                        printf("\nVerification failed. pin is now 1234\n");
                        pindigit1 = '1'; //whatever gets entered in pindigits, gets overwritten and becomes 1,2,3,4.
                        pindigit2 = '2';
                        pindigit3 = '3';
                        pindigit4 = '4';
                        break;
                    }
                }
                else //if you entered a character (not 0,1,2,3,4,5,6,7,8,9) in when creating a new pin. this happens
                {
                    //An error message gets printed and the pindigits are now 1234 (default)
                    printf("\nError, entered character. Pin is now 1234\n");
                    pindigit1 = '1';
                    pindigit2 = '2';
                    pindigit3 = '3';
                    pindigit4 = '4';
                    break; //breaks the loop
                }
                
                
            }

            case '3': //If for the switch statment you entered 3, this happens
            {   
                //This prints the amount of times you entered a pin correctly and incorrectly
                printf("\nYou entered the correct pin %d times and you entered the wrong pin %d\n", pinright, pinwrong);
                break; 
            }

            case '4': //If for the switch statment you entered 4, nothing happens, the loop breaks.
            {
                break;
            }
            
            default: //If you entered anything that is not 1,2,3,4 (the case's) this prints and the loop breaks.
            {
                printf("\nPlease Enter the right number to access the menu\n");
                break;
            }
        }
        
    } //Until '4' gets entered at the switch statment, the loops carrys on. if '4' gets entered. the switch statment breaks and the code is ended. since there is nothing after the while accept the return 0.
    while(bankmenu != '4');
    printf("Thanks for using the ATM");
       
  return 0;
} 