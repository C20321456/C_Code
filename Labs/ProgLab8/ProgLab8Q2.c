#include <stdio.h>
#define ROW 6
#define COL 6

int main(void)
{
    int data[ROW][COL] = { {3, 2, 5, 7, 4, 2},
                           {1, 4, 4, 8, 13, 1},
                           {9, 1, 0, 2, 0, 0},
                           {0, 2, 6, 3, -1, -8}
    };

    int i, j;
    int add;

    for ( i = 0; i < ROW; i++)
    {
        for ( j = 0; j < COL; j++)
        {
            add = data[ROW] data[COL];
        }
    }
    
    printf("Added numbers is %d", add);
}