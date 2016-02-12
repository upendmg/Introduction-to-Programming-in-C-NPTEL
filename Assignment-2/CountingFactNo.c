#include <stdio.h>

long factorial(long);

int main()
{
    long m, n, i, s;
    int count = 0;

    scanf ("%ld%ld", &n, &m);
    if (m == 0)
    {
        printf ("0\n");
        return 0;
    }
    if (m == 1)
    {
        printf ("1\n");
        return 0;
    }
    for (i = 0; i <= m; i++)
    {
        s = factorial(i);
        if (s >= n && s <= m)
            count++;
        if (s > m)
            break;
    }

    printf ("%d\n", count);
    return 0;
}

long factorial(long x)
{
    if (x <= 0)
        return 1;
    return (x * factorial(x - 1));
}
