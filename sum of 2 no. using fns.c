#include<stdio.h>
int sum(int x,int y);
int main()
{
	int a ,b;
	printf("Enter 2 numbers:\n");
	scanf("%d%d",&a,&b);
	printf("addition of the given numbers=%d",sum(a,b));
	return 0;
}
int sum(int x,int y)
{
	int s=0;
	s=x+y;
	return s;
}
