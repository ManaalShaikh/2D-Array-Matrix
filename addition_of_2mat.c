#include<stdio.h>
void main()
{
	int a[10][10],b[10][10],c[10][10],i,j,k,m,n;;
	printf("Enter no.of rows and cols:");
	scanf("%d%d",&m,&n);
	printf("Enter the First Matrix:");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the Second Matrix:");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("\n Addition of 2 matrices are:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d \t",c[i][j]);
		}
		printf("\n");
	}	
}
