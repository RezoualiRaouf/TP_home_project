#include <stdio.h>

/**
 * get_index_rec - Recursively searches for a value in an array and returns its index.
 * @tab: The array to search in.
 * @index: The current index in the array.
 * @value: The value to search for.
 *
 * Return: The index of the value if found, otherwise -1.
 */

int get_index_rec(int tab[], int index,int value)
{
    if (tab[index] == '\0')
        return (-1);
    else if (tab[index] == value)
        return (index);
    else
        return (get_index_rec(tab, index + 1, value));
}

/**
 * main - Entry point of the program.
 *
 * Return: Always 0 (success).
 */

int main(void)
{

int tst_tab[3] = {1,2,3}, value;

printf("enter the value that you want: ");
scanf("%d", &value);

int index = get_index_rec(tst_tab, 0, value);

if (index == -1)
    printf("ERROR: The value was not found!\n");
else
    printf("The value %d is at the index %d\n", value, index);

    return (0);
}