#include <stdio.h>

void merging(int [], int, int [], int, int []);

int main()
{
    int a[50];
    int b[50];
    int array[100];
    int sizeA;
    int sizeB;
    int i;

    printf("Enter size for array a:\n");
    scanf("%d", &sizeA);

    printf("Enter in the numbers:\n");
    for (i = 0; i < sizeA; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter size for array b:\n");
    scanf("%d", &sizeB);

    printf("Enter in the numbers:\n");
    for (i = 0; i < sizeB; i++)
    {
        scanf("%d", &b[i]);
    }

    merging(a, sizeA, b, sizeB, array);
    
    printf("merged array:\n");

    for (i = 0; i < sizeA + sizeB; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
    
}

void merging(int a[], int sizeA, int b[], int sizeB, int array[])
{
    int j;
    int k;
    int i;

    j = k = 0;

    for (i = 0; i < sizeA + sizeB; i++)
    {
        if (j < sizeA && k < sizeB)
        {
            if (a[j] < b[k])
            {
                array[i] = a[j];
                j++;
            }
            else
            {
                array[i] = b[k];
                k++;
            }
        }
        else if (j == sizeA)
        {
            for (i < sizeA + sizeB; i++;)
            {
                array[i] = b[k];
                k++;
            }
            
        }
        else
        {
            for (i < sizeA + sizeB; i++;)
            {
                array[i] = a[j];
                j++;
            }
            
        }
        
    }
    
}