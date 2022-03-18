#include <stdio.h> 
#include <time.h>
#include <stdlib.h>

//enter in the size of arr1 and arr2 manually, its 5 by defualt but can be changed
#define size 5

int printIntersection(int arr1[], int arr2[]) 
{ 
    int i = 0;
    int j = 0;
    printf("\n");

    while (i < size && j < size) 
    { 
        if (arr1[i] < arr2[j])
        {
            i++; 
        }
        else if (arr2[j] < arr1[i])
        { 
            j++; 
        }
        else
        { 
            printf("%d ", arr2[j++]); 
            i++; 
        } 
    } 
} 
  

int main() 
{ 
    int arr1[size];
    int arr2[size];
    int i;
    int j;
    int tmp;
    int tmp2;
    /*
    for (i = 0; i < size; i++)
    {
        arr1[i]= rand()%100;
    }

    for (i = 0; i < size; i++)
    {
        arr2[i]= rand()%100;
    }
    */

    printf("\nEnter %d numbers for the 1st array:\n", size);

    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("\nEnter %d numbers for the 2nd array:\n", size);

    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr2[i]);
    }
    

    for (i = 0; i < size; i++)
    {
        for (j=i+1; j < size; j++)
        {
            if (arr1[j] < arr1[i])
            {
                tmp = arr1[i];
                arr1[i] = arr1[j];
                arr1[j] = tmp;
            }
            
        }
        
    }

    for (i = 0; i < size; i++)
    {
        for (j=i+1; j < size; j++)
        {
            if (arr2[j] < arr2[i])
            {
                tmp2 = arr2[i];
                arr2[i] = arr2[j];
                arr2[j] = tmp2;
            }
            
        }
        
    }
    
    //The code above me sorts out the list

    double begin = clock();

    printIntersection(arr1, arr2);
    printf("\n\nIf you see blanks, that means nothing was intersected");	 

    double end = clock();

    printf("\n\nTime elapsed is %.10f seconds", (double)(end - begin)/CLOCKS_PER_SEC);

    return 0; 
} 