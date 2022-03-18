#include <stdio.h>
#define ROW 3
#define COL 4

int main(void)
{
    int array1[ROW][COL] = {{3,7,9,3}, {7,3,6,9}, {8,4,3,6}};
    int array2[ROW][COL] = {{36,9,32,4},{46,26,9,3},{8,3,57,32}};
    int array3[ROW][COL];
    int i, j;

    for ( i = 0; i < ROW; i++){
        for ( j = 0; j < COL; j++){
            array3[i][j] = array2[i][j]*array1[i][j];
        }
    }

    printf("\n\narray1 contains %d and array2 contains %d mulitplied together gets %d\n", array1[0][0], array2[0][0], array3[0][0]);
}

