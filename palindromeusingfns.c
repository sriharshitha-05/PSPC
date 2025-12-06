#include<stdio.h>
int palindrome(int n);
int main()
{
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	if(palindrome(n)==1)
	{
    	printf("%d is a palindrome",n);
	}
	else
	{
		printf("%d is not a palindrome",n);
	}
	return 0;
	
}

int palindrome(int n)
{
	int i,temp,rev=0,rem=0;
	temp=n;
	for(i=0;n!=0;i++){
		rem=n%10;
		rev=(rev*10)+rem;
		n=n/10;
	}
	if(temp==rev)
	{
		return 1;
	}
	else {
		return 0;
	}
	return rev;
}
