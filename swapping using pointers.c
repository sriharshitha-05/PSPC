#include<stdio.h>
void swap(int *x,int *y);
int main()
{
	int a,b;
	int *p,*q;
	p=&a;
	q=&b;
	printf("Enter 2 numbers:\n");
	scanf("%d%d",p,q);
	printf("Numbers before swapping a=%d,b=%d\n",*p,*q);
	printf("Numbers after swapping a=%d,b=%d",*q,*p);
	return 0;
}

void swap(int *x,int *y)
{
	int temp=0;
	temp=*x;
	*x=*y;
	*y=temp;
}
