#include <stdio.h>

/**
 * rechercheRecursive2 - Search for a value in the matrix recursively.
 * @tab: The matrix tho search for the valeu.
 * @current_row: The current row index.
 * @current_col: The current column index.
 * @ROW: The number of rows in the matrix.
 * @COL: The number of columns in the matrix.
 * @value: user input value
 * Return: 1 if value is found in the matrix, -1 if not.
 */

int rechercheRecursive2(int tab[3][3], int current_row, int current_col, int ROW, int COL, int value)
{
    //Checks if we are at the end of the matrix
    if (current_row == ROW)
        return (-1);

    //checks if the value is in the matrix
    if (tab[current_col][current_row] == value)
        return (1);

    //checks if we are at the end of the row
    if(current_col + 1== COL)
        return(rechercheRecursive2(tab, current_row + 1, 0, ROW, COL, value));
    else
        return (rechercheRecursive2(tab, current_row, current_col + 1, ROW, COL, value));
}

/**
 * sommeRecursive - Wrapper function for sommeRecursiveHelper.
 * @tab: The matrix to calculate the sum for.
 * @ROW: The number of rows in the matrix.
 * @COL: The number of columns in the matrix.
 *
 * Return: The sum of matrix elements.
 */

// only for the Usage in the main function 
int rechercheRecursive(int tab[3][3], int ROW, int COL, int value)
{
    return rechercheRecursive2(tab, 0, 0, ROW, COL, value);
}

/**
 * main - Entry point of the program.
 *
 * Return: Always 0 (success).
 */

int main(void)
{

int tab[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
int var = 7;

int found = rechercheRecursive(tab,3, 3, var);

if (found == -1)
    printf("ERROR: The value was not found in the matrix!\n");
else
    printf("The value %d is in the matrix", var);

    return (0);
}