#include <stdio.h>

int gcd(int, int);
int main()
{
    int n, i, count = 1;
    scanf ("%d", &n);
    for (i = 2; i < n; i++)
    {
     if (gcd(n, i) == 1)
            count++;
    }
    printf ("%d\n", count);
    return 0;
}
int gcd(int x, int y)
{
    int temp;
    while (y != 0)
    {
        temp = x;
        x = y;
        y = temp % y;
    }
    return x;
}
