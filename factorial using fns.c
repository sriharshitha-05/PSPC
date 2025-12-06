#include<stdio.h>
int fctorial(int x);
int main()
{
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	printf("Factorial of %d is %d",n,factorial(n));
	return 0;
}
int factorial(int x)
{
	int fact=1;
	int i;
	for(i=1;i<=x;i++)
	{
		fact=fact*i;
	}
	return fact;
}
