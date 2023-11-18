#include <stdio.h>
/**
 * rec_sum - Recursively calculates the sum of elements in an array.
 * @tab: The array to calculate the sum for.
 * @index: The current index in the array.
 *
 * Return: The sum of array elements.
 */
int rec_sum(int tab[] ,int index)
{
    if (tab[index] == '\0')
        return (0);
    else
        return (tab[index] + rec_sum(tab, index + 1));
}
/**
 * main - Entry point of the program.
 *
 * Return: Always 0 (success).
 */
int main(void)
{
    int t[3] = {1,2,4};
    int sum = rec_sum(t, 0); //start with index 0
    printf("%d", sum);
    return (0);
}