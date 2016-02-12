#include <stdio.h>

int sort(int [], int);
int search(int, int[], int);
int main()
{
    int n1, n2, min, flag = 0, i, j;

    scanf ("%d", &n1);
    int ar1[n1];

    for (i = 1; i <= n1; i++)
        scanf ("%d", &ar1[i]);

    scanf ("%d", &n2);
    int ar2[n2];

    for (i = 1; i <= n2; i++)
        scanf ("%d", &ar2[i]);
    sort (ar1, n1);
    sort (ar2, n2);

    for (i = 1; i <= n1; i++)
    {
        if (!search(ar1[i], ar2, n2))
        {
            min = ar1[i];
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        printf ("NO\n");
    else
        printf ("%d\n", min);

    return 0;
}
int search(int x, int arr[], int len)
{
    int lower, upper, mid;

    lower = 1;
    upper = len;
    mid = (lower + upper) / 2;

    while (lower <= upper)
    {
        if (x == arr[mid])
            return 1;
        else if (x < arr[mid])
            upper = mid - 1;
        else if (x > arr[mid])
            lower = mid + 1;
        mid = (lower + upper) / 2;
    }
    if (lower > upper)
        return 0;
}
int sort(int ar[], int n)
{
    int i, j, key;
    int h = 0;

    while (h < n)
    {
        h = h * 3 + 1;
    }
    while (h > 0)
    {
        for ( j = h; j <= n; j++ )
        {
            key = ar[j];
            i = j - h;

            while (i >= h && ar[i] > key)
            {
                ar[i+h] = ar[i];
                i -= h;
            }
            ar[i+h] = key;
        }
        h /= 3;
    }
    return 0;
}
