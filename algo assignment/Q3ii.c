#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define size 5

int main()
{
    int array[size];
    int i;
    int position;
    int j;
    int tmp;

    printf("Enter your elements:\n");

    for (i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
        //array[i]= rand()%100;
    }

    for (i = 0; i < size; i++)
    {
        for (j=i+1; j < size; j++)
        {
            if(array[j] < array[i])
            {
                tmp = array[i];
                array[i] = array[j];
                array[j] = tmp;
            }
            
        }
        
    }

    for (i = 0; i < size; i++)
    {
        printf("\n(%d) digit: ", i+1);
        printf("%d\n", array[i]);
    }
    

    printf("Enter the location where you wish to delete the element\n");
    scanf("%d", &position);

    double begin = clock();
    
    if (position >= size+1)
    {
        printf("Cant delete.\n");
    }
    else
    {
        for (i = position - 1; i < size - 1; i++)
        {
            array[i] = array[i+1]; 
        }

         printf("\nnew array\n");

        for (i = 0; i < size - 1; i++)
        {
            printf("\n(%d) digit: ", i+1);
            printf("%d\n", array[i]);
        }
        
    }
    
    double end = clock();

    printf("\n\nTime elapsed is %.10f seconds", (double)(end - begin)/CLOCKS_PER_SEC);

    return 0;
}