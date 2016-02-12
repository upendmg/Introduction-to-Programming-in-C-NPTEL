#include <stdio.h>

int divide();
int main()
{
    int a,b,d;
    scanf("%d%d",&a,&b);
    d = divide(a,b);
    printf("%d",d);
    return 0;
}
int divide(int a, int b)
{
    if (b == 0 || a % b != 0)
        return -1;
    return a/b;
}
