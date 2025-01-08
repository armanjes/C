/*
📚 Multi-dimensional array in C

✅ 1. What is Multi-dimensional array?
Multi-dimensional array is an array of arrays.

✅ 2. Two-Dimensional Arrays
A 2D array also known as matrix.

*** int array[2][3] = {{1, 2}, {1,2,3}}; ***
The first dimension represents the number of rows [2], while the second dimension represents the number of columns [3].
*/

#include <stdio.h>

int main() {
    // int number[2][3] = {
    //     {111, 333, 555},
    //     {222, 444, 666}
    // };
    // printf("%d\n", number[0][2]);
    // printf("%d\n", number[1][2]);

    int numbers[3][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };


    // printf("%d\n", numbers[0][0]);
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d\n", numbers[i][j]);
        }
        
    }
    

    return 0;
}