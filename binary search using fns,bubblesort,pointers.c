#include<stdio.h>
void swap(int *x,int *y);
void bubble(int *p,int n);
int binary(int *p,int n,int *key);
int main()
{
	int a[50],i,n,s,result=0;
	int *p=a;
	printf("Enter array size:");
	scanf("%d",&n);
	printf("Enter array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter a element to search:");
	scanf("%d",&s);
	bubble(a,n);
	result=binary(a,n,&s);
	if(result==-1)
	{
		printf("Element not found!\n");
	}
	else
	{
		printf("Element found at position %d",result);
	}
	return 0;
}

void swap(int *x,int *y)
{
	int temp=*x;
	*x=*y;
	*y=temp;
}

void bubble(int *p,int n)
{
	int i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(*(p+j)>*(p+j+1))
			{
				sawp((p+j),(p+j+1));
			}
	    }
    }
}

int binary(int *p,int n,int *key)
{
	int l,h,mid;
	l=0;
	h=n-1;
	while(l<=h)
	{
		mid=(l+h)/2;
		if(*(p+mid)==*key)
		{
			return mid;
		}
		else if(*(p+mid)>*key)
		{
			h=mid-1;
		}
		else
		{
			l=mid+1;
		}
	}
	if(l>h)
	{
		return -1;
	}
}
