#include <stdio.h>
#include <string.h>

int GetString(char *, char *);

int main()
{
    int n, i;
    char current[100], previous[100];
    scanf ("%d", &n);
        getchar();
    fgets(current, 100, stdin);
    for (i = 2; i <= n; i++)
    {
        strcpy(previous, current);
        GetString(previous, current);
    }
    printf ("%s", current);
    return 0;
}
int GetString(char *previous_str, char *current_str)
{
    char rest_str[100];
    int num, i, j;
    scanf ("%d", &num);
    getchar();
    fgets(rest_str, 100, stdin);
    int rest_len = strlen(rest_str);
    for (i = 0; i < num; i++)
        current_str[i] = previous_str[i];
           for (j = 0; j < rest_len; j++)
        current_str[i+j] = rest_str[j];
        current_str[i+j] = '\0';
    return 0;
}
