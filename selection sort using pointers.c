#include<stdio.h>
void swap(int *,int *);
void selection(int *,int );
int main()
{
	int n,a[50],i,j;
	int *p;
	p=&a;
	printf("Enter array size:");
	scanf("%d",&n);
	printf("Enter array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	selection(a,n);
	printf("Elements after sorting:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",*(p+i));
	}
	return 0;
}

void swap(int *x,int *y)
{
	int temp=0;
	temp=*x;
	*x=*y;
	*y=temp;
}

void selection(int *p,int n)
{
	int i,j,min;
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(*(p+j)<*(p+min))
			{
				min=j;
		    }
	    }
		if(i!=min)
		{
			swap((p+i),(p+min));
		}
	}
}
