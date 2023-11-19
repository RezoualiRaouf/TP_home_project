#include <stdio.h>

/**
 * sommeRecursive2 - Recursively calculates the sum of elements in a matrix.
 * @tab: The matrix to calculate the sum for.
 * @current_row: The current row index.
 * @current_col: The current column index.
 * @ROW: The number of rows in the matrix.
 * @COL: The number of columns in the matrix.
 *
 * Return: The sum of matrix elements.
 */

int sommeRecursive2(int tab[3][3], int current_row, int current_col, int ROW, int COL)
{
    if (current_row == ROW)
        return 0;

    if (current_col == COL)            //row + 1 to go to the next line and col = 0 to start from the beginning of the row
        return sommeRecursive2(tab, current_row + 1, 0, ROW, COL);
                                                                                //col + 1 to jump to the next col
    return tab[current_row][current_col] + sommeRecursive2(tab, current_row, current_col + 1, ROW, COL);
}

/**
 * sommeRecursive - Wrapper function for sommeRecursive2.
 * @tab: The matrix to calculate the sum for.
 * @ROW: The number of rows in the matrix.
 * @COL: The number of columns in the matrix.
 *
 * Return: The sum of matrix elements.
 */

// only for the Usage in the main function
int sommeRecursive(int tab[3][3], int ROW, int COL)
{
    return sommeRecursive2(tab, 0, 0, ROW, COL);
}

/**
 * main - Entry point of the program.
 *
 * Return: Always 0 (success).
 */
int main(void)
{
    int t[3][3] = {{1,2,4}, {1,3,3}, {1,2,3}};

    int sum = sommeRecursive(t, 3, 3);

    printf("%d", sum);
    
    return (0);
}