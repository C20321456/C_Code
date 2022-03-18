#include <stdio.h>
#define ROW 3
#define COL 2

int main(void){
    int array[ROW][COL];
    int i;
    int j;

    printf("Enter %d numbers\n\n", ROW*COL);

    for (i = 0; i < ROW; i++){
        for ( j = 0; j < COL; j++){
            scanf("%d", &array[i][j]);
        } 
    }

    printf("\n\n");

    for ( i = 0; i < ROW; i++){
        for(j=0; j < COL; j++){
            printf("Row %d, Col %d contains %d\n", i, j, array[i][j]);
        }
    }
}
