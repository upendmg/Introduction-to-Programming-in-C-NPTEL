#include<stdio.h>
int a[10005],b[10005];

int main()
{
	int n,i,l,d1,d2,k;
	char ch,c[5001];
	scanf("%d",&n);
	ch=getchar();
	while(ch==' ' || ch=='\n' || ch=='\t')
	{
		ch=getchar();
	}
	for(i=0;i<n;i++)
	{
		c[i]=ch;
		ch=getchar();
	}
	for(i=0;i<2*n-1;i++)
		a[i]=0;
	k=2*n-1;
	for(l=1;l<n;l++)
	{
		for(i=0;i<n-l;i++)
		{
			d1=12345;
			if(c[i]==c[i+l])
			{
				b[2*i]=a[2*i+1];
			}
			else
			{
				d1=a[2*i]+1;
				d2=a[2*i+2]+1;
				b[2*i]=d1<d2?d1:d2;
			}
		}
		k-=2;
		for(i=0;i<k;i=i+2)
		{
			a[i+1]=a[i+2];
			a[i]=b[i];
		}
	     }
	      printf("%d\n",a[0]);
	     return 0;
 }