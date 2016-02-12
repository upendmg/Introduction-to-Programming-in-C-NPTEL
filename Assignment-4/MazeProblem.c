#include <stdio.h>

int maze[50][50], n, success[50][50];

int FindPath();
int callMazePath(int, int);
int PossiblePath(int, int);

int main()
{
    int x, y;

    scanf ("%d", &n);

    for (x = 0; x < n; x++)
        for (y = 0; y < n; y++)
            scanf ("%d", &maze[x][y]);

    // Call for finding the path
    FindPath();
    return 0;
}

int FindPath()
{
    // If the left and bottom are zero, then no movement is possible
    if (callMazePath(0, 0) == 0)
    {
        printf ("NOT POSSIBLE\n");
        return -1;
    }
    printf ("POSSIBLE\n");
    return 1;
}

// Recursive function
int callMazePath(int x, int y)
{
    // Check whether we have reached our destination or not
    if (x == n - 1 && y == n - 1)
    {
        // Build the path matrix
        success[x][y] = 1;
        return 1;
    }
    
    // Check whether the path is possible ahead or not
    if (PossiblePath(x, y))
    {
        // Build the path matrix for possible path
        success[x][y] = 1;
        if (callMazePath(x + 1, y))
            return 1;
        if (callMazePath(x, y + 1))
            return 1;

        // Build the path matrix for not possible path
        success[x][y] = 0;
        return 0;
    }
    return 0;
}

int PossiblePath(int x, int y)
{
    // If the current position that we are at is 1 then return true, else false
    if (x >= 0 && x < n && y >= 0 && y < n && maze[x][y] == 1)
        return 1;
    return 0;
}
