/*
Name: Mykolas kubilius
Date: 22/04/2021
Test: Lab test 4
Compiler: Visual studio code

description: this code displays data for an airline company called Shamrock air. it holds data such as the flight number, the names of the passangers
and seat number plus the destination.
*/




#include <stdio.h>
#include <string.h>

#define size 5
#define Surname_length 21
#define length 11
#define seat_num 3

struct date
{
    int day;
    int month;
    int year;
};


struct shamrock_Air
{
    char flightnumber[size];
    struct date flight_Date;
    char firstname[length];
    char surname[Surname_length];
    char seat_number[seat_num];
    char destination[length];
};

void enter_details(struct shamrock_Air *);
void display_details(struct shamrock_Air);



int main()
{
   

    struct shamrock_Air pass1;
    printf("\nEnter details for passanger 1");
    enter_details(&pass1);
    
    struct shamrock_Air pass2;
    printf("\n\nEnter details for passanger 2");
    enter_details(&pass2);

    display_details(pass1);
    display_details(pass2);

    return 0;
}

    




void enter_details(struct shamrock_Air *pass ) 
{
    printf("\nEnter in first name for passanger: ");
    scanf("%s", &pass -> firstname);

    
    printf("\nEnter in surname for passanger: ");
    scanf("%s", &pass -> surname);

    printf("\nEnter flightnumber for passanger: ");
    scanf("%s", &pass -> flightnumber);

    printf("\nEnter day of flight: ");
    scanf("%d", &pass->flight_Date.day);

    printf("\nEnter month of flight: ");
    scanf("%d", &pass->flight_Date.month);

    printf("\nEnter year of flight: "); 
    scanf("%d", &pass->flight_Date.year);

    printf("\nEnter seat number: ");
    scanf("%s", &pass->seat_number);

    printf("\nEnter destination: ");
    scanf("%s", &pass->destination);

}

void display_details(struct shamrock_Air pass)
{
    printf("\n\nName of passanger is %s %s", pass.firstname, pass.surname);
    printf("\nThe flight number is: %s", pass.flightnumber);
    printf("\nThe date for flight is %d/%d/%d", pass.flight_Date.day, pass.flight_Date.month, pass.flight_Date.year);
    printf("\nThe seat number is: %s", pass.seat_number);
    printf("\nThe destination is: %s", pass.destination);
}
    


