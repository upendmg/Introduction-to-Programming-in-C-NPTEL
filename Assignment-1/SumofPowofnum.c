#include <stdio.h>

int main()
{

    int n;
    int i=1;
    int sum=0;
    int fourth = 0;

    scanf("%d", &n);

    if((n < 0) || (n > 40))
        return 1;

    while (i <= n)
    {
        fourth = i * i * i * i;
        sum = sum + fourth; /* Add the fourth power of i to the       sum */
        i++;
    }

    printf("%d\n", sum);
    return 0;
}

	