#include<stdio.h>
void main()
{
	int a[4][4],i,j,n;
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
	printf("\n Diagonal elements are:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
			{
				printf("%d \t",a[i][j]);
			}
		}
	}
}
