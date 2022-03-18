#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
    FILE *fp = fopen("File.txt", "r");
    if(fp == NULL)
    {
        perror("Unable able to read the file");
        exit(1);
    }
    
    char chunk[128];
    
    while(fgets(chunk, sizeof(chunk), fp) != NULL)
    {
        fputs(chunk, stdout);
        fputs("####\n", stdout);
    }



    sleep(3);

    printf("\n");
    printf("The program is closing in 30 seconds, please wait!\n");
    printf("Exiting.....\n");

    sleep(30);//this is the timer that waits for the program to exit. if 30 seconds is too long to wait. change the number

    printf("\n");
    printf("Program exited!");

    fclose(fp);

    return 0;
}