#include <stdio.h>

int LCM(int, int, int);

int main()
{
    int n, i, lcm = 0;
    scanf ("%d", &n);
    int arr[n+1];
    scanf ("%d", &arr[0]);
    lcm = arr[0];
    for (i = 1; i < n; i++)
    {
        scanf ("%d", &arr[i]);
        if (lcm < arr[i])
            lcm = LCM(arr[i], lcm, arr[i]);
        else
            lcm = LCM(lcm, arr[i], lcm);
    }
    printf ("%d\n", lcm);
    return 0;
}

int LCM(int a, int b, int c)
{
    if (a % b)
        return (LCM (a + c, b, c));
    return a;
}
