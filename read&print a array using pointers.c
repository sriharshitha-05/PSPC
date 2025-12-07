#include<stdio.h>
int main()
{
	int n,a[50],i;
	int *p=a;
	printf("Enter array size:");
	scanf("%d",&n);
	printf("Enter array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&p[i]);
	}
	printf("The elements you entered are :\n");
	for(i=0;i<n;i++)
	{
		printf("%d",*(p+i));
		printf("\n");
	}
	return 0;
}
