#include <stdio.h>
int main()
{
    char marriage_status = ' ';
    
    printf("Please enter your marriage status\n");
    scanf("%c", &marriage_status);
    
    switch (marriage_status)
    {
        case 'S':
        {
            printf("you are single", marriage_status);
            break;
        }
        
        case 'M':
        {
            printf("married", marriage_status);
            break;
        }
        
        case 'W':
        {
            printf("widowed", marriage_status);
            break;
        }

        case 'E':
        {
            printf("seperated", marriage_status);
            break;
        }

        case 'D':
        {
            printf("divorced", marriage_status);
            break;
        }

        default:
        {
            printf("error:invalid code");
            break;
        }
    }

    return 0;    
}