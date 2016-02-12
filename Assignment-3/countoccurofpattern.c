#include <stdio.h>
#include <string.h>

int main()
{
    char S[8192], P[8192];
    int i, j, count = 0, true_count = 0;

    scanf ("%s\n%s", S, P);
    i = j = 0;

    int len_P = strlen(P);
    while (S[i] != '\0')
    {
        if (P[j] != '\0')
        {
            if (S[i] != P[j])
            {
                if (count > 0)
                    i--;
                   j = count = 0;
            }
            else
            {
                j++;
                count++;
                if (count == len_P)
                {
                    true_count++;
                    i--;
                    j = count = 0;
                }
            }
        }
        else
            j = 0;
        i++;
    }
    printf ("%d\n", true_count);
    return 0;
}
