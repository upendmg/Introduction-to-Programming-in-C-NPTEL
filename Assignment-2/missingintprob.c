#include <stdio.h>

int main()
{
    int n, i, sum = 0, current = 0, res = 0;

    scanf ("%d", &n);
    
    for (i = 1; i < n; i++)
    {
        scanf ("%d", &current);
        sum = sum + current;
    }
    res = (n * (n + 1)) / 2;
    printf ("%d\n", res - sum);
    return 0;
}
