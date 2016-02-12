#include <stdio.h>

int fact(int n)
{
    int i=1,res=1;
    for(i=1;i<=n;i++)
        res*=i;
    return res;
}

int main()
{
    int n,k,d1,d2,d3,temp;
    scanf("%d%d",&n,&k);
    if(k>n)
        printf("0\n");
    else
    {
        d1=fact(n);
        d2=fact(k);
        d3=fact(n-k);
        temp=d1/(d2*d3);
        printf("%d\n",temp);
    }
    return 0;
}
