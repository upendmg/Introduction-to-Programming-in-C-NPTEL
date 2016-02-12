#include <stdio.h>

int main()
{
    int i;
    char PS[100], C, S[10];

    scanf ("%s\n%c\n%s", PS, &C, S);
    for (i = 0; PS[i] != '\0'; i++)
    {
        if (C != PS[i])
            printf ("%c", PS[i]);
        else if (C == PS[i])
            printf ("%s", S);
    }
    printf ("\n");
    return 0;
}
