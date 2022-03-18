#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//set your own size here
#define SIZE 5

int intersection(int arr1[], int arr2[], int arr3[], int arr4[])
{
    int i;
    int j;

    while (i < SIZE && j < SIZE) 
    { 
        if (arr1[i] == arr2[j])
        {
            arr3[i] = arr1[i];
        }
        else if (arr2[j] == arr1[i])
        { 
            arr4[i] = arr2[j];
        }
    }

    for (i = 0; i < SIZE; i++)
    {
        printf("\narray3: %d", arr3[i]);
    }
    
    for (i = 0; i < SIZE; i++)
    {
        printf("\narray4: %d", arr4[i]);
    }
    
}

int main()
{
    int arr1[SIZE];
    int arr2[SIZE];
    int arr3[SIZE] = {0};
    int arr4[SIZE] = {0};
    
    int i;
    int j;
    int tmp;
    int tmp2;


    /*
    for (i = 0; i < SIZE; i++)
    {
        arr1[i]= rand()%100;
    }

    for (i = 0; i < SIZE; i++)
    {
        arr2[i]= rand()%100;
    }
    */
    
    //right now the arrays are randomly generated, if you want to
    //input your own numbers. remove the /* from lines 62 and 75

    printf("\nEnter %d numbers for the 1st array:\n", SIZE);

    for (i = 0; i < SIZE; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("\nEnter %d numbers for the 2nd array:\n", SIZE);

    for (i = 0; i < SIZE; i++)
    {
        scanf("%d", &arr2[i]);
    }
    

   for (i = 0; i < SIZE; i++)
    {
        for (j=i+1; j < SIZE; j++)
        {
            if (arr1[j] < arr1[i])
            {
                tmp = arr1[i];
                arr1[i] = arr1[j];
                arr1[j] = tmp;
            }
            
        }
        
    }

    for (i = 0; i < SIZE; i++)
    {
        for (j=0; j < SIZE; j++)
        {
            if (arr2[j] < arr2[i])
            {
                tmp2 = arr2[i];
                arr2[i] = arr2[j];
                arr2[j] = tmp2;
            }
            
        }
        
    }

    //The code above me sorts out the list.

    double begin = clock();

    intersection(arr1, arr2, arr3, arr4);

    double end = clock();

    printf("\n\nTime elapsed is %.10f seconds", (double)(end - begin)/CLOCKS_PER_SEC);

    printf("\n\nif you see zeros that means that element on that position did not intersect\n");
    return 0;
}