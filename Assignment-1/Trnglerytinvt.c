#include <stdio.h>

int main()
{
    int h, i, j, base = 1;

    scanf ("%d", &h);

    for (i = h; i > 0; i--)
    {
        for (j = base; j <= h; j++)
        {
            if (j > 9)
                printf ("%d", j % 10);
            else
                printf ("%d", j);
        }

        base++;
        printf ("\n");
    }
    return 0;
}
