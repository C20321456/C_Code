#include <stdio.h>
int main()
{
    char oper = ' ';
   
    printf("Enter a character from the keyboard\n");
    scanf("%c", &oper);

    switch (oper)
    {
        case 'a':
        {
            printf("\n%.lc is a vowel", oper);
            break;
        }

        case 'e':
        {
            printf("\n%.lc is a vowel", oper);
            break;
        }    

        case 'i':
        {
            printf("\n%.lc is a vowel", oper);
            break;
        }

        case 'o':
        {
            printf("\n%.lc is a vowel", oper);
            break;
        }

        case 'u':
        {
            printf("\n%.lc is a vowel", oper);
            break;
        }

        default:
        {
            printf("not a vowel");
            break;
        }            
    
    }
    
    return 0;
}
