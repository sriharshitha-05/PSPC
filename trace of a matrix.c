#include<stdio.h>
int main()
{
	int a[10][10],i,j,sum=0,n;
	printf("Enter the order of matrix:");
	scanf("%d",&n);
	
	printf("Enter elements of the matrix:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("Trace:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
			{
			    sum+=a[i][j];
			}
		}
	}
	return 0;
}
