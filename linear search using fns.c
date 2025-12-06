#include <stdio.h>
int linear(int a[],int n);
int main()
{
	int n,x,a[50],i;
	printf("Enter array size:");
	scanf("%d",&n);
	printf("Enter array values:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter a element to search:");
	scanf("%d",&n);
    printf("The number found at position %d",i);
}
int linear(int a[],int n)
{
	int i,x;
	for(i=0;i<n;i++)
	{
		if(x==a[i])
		{
	        printf("%d",i);
	        break;
	    }
	    
	}
}
