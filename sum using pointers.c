#include<stdio.h>
int main()
{
	int a,b,c;
	int *p,*q,*r;
	p=&a;
	q=&b;
	r=&c;
	printf("Enter 2 numbers:\n");
	scanf("%d%d",p,q);
	*r=*p+*q;
	printf("Sum=%d",*r);
	return 0;
}
