#include<stdio.h>
int main()
{
	int i,n,a[50],j,temp=0;
	int *p=a;
	printf("Enter array size:");
	scanf("%d",&n);
	printf("Enter array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&p[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(*(p+j)>*(p+i))
			{
				temp=*(p+j);
				*(p+j)=*(p+i);
				*(p+i)=temp;
			}
		}
	}
	printf("Elements after bubble sort:%d\n");
	for(i=0;i<n;i++)
	{
		printf("%d",*(p+i));
	}
	return 0;
}
