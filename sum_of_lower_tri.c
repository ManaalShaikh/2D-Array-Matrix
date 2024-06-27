#include<stdio.h>
void main()
{
	int a[4][4],i,j,n,s=0;
	printf("Enter limit:");
	scanf("%d",&n);
	printf("Enter %d elements:",n*n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i<=j)
			{
			   s=s+a[i][j];
			}
		}
	}
	printf("Sum of Lower Triangular elements is:%d",s);
}
