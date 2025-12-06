#include<stdio.h>
int reverse(int n);
int main()
{
	int n;
	printf("Enter a number to be reversed:");
	scanf("%d",&n);
	printf("reverse of the given number:%d",reverse(n));
	return 0;
}

int reverse(int n)
{
	int i,rev=0,rem=0;
	for(i=0;n!=0;i++){
		rem=n%10;
		rev=(rev*10)+rem;
		n=n/10;
	}
	return rev;
}
