#include <stdio.h>

void reverse();

int main()
{
    reverse();
    printf ("\n");
    return 0;
}
void reverse()
{
    char c;
    c = getchar();
    if (c != '\n' && c != EOF)
    {
        reverse();
        printf ("%c", c);
    }
}
