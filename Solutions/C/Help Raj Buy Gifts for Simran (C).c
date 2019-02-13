#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n],x=0,y=0;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]>y)
		    y=a[i];
	}
	for(int i=1;i<=y;i++)
	{
		if(y%i==0)
		{
			for(int j=0;j<n;j++)
			{
				if(a[j]==i)
				{
					a[j]=0;
					break;
				}
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]>x)
		    x=a[i];
	}
	printf("%d %d\n",x,y);
}