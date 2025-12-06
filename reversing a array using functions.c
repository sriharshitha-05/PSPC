#include<stdio.h>
int reverse(int a[],int n);
int main()
{
	int a[50],i,n;
	printf("Enter array size:");
	scanf("%d",&n);
	printf("Enter array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	reverse(a,n);
	return 0;
}
int reverse(int a[],int n)
{	int i;
	for(i<n-1;i>=0;i--)
	{
		printf("%d",a[i]);
	}
	return a[i];
}
