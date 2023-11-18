#include <stdio.h>

int rec_sum(int tab[] ,int index)
{
    if (tab[index] == '\0')
        return (0);
    else
        return (tab[index] + rec_sum(tab, index + 1));
}
int main(void)
{
    int t[3] = {1,2,4};
    int sum = rec_sum(t, 0);
    printf("%d", sum);
    return (0);
}