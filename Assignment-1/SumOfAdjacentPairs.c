#include <stdio.h>

int main()
{
    int current, sum = 0, prev;
     /* at least two numbers are present */
    scanf ("%d", &prev);
    scanf ("%d", &current);
    while (current != -1)
    {
        sum = prev + current;
        printf ("%d", sum);
        prev = current; // shift current to previous
        scanf ("%d", &current);  // read next : the new current

        if (current == -1)
            break;

        printf (" ");
    }
    printf ("\n");
    return 0;
}
