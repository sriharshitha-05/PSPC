#include <stdio.h>
int prime(int n);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (prime(n) == 1)
	{
        printf("%d is a prime number\n", n);
    }
	else 
	{
        printf("%d is not a prime number\n", n);
    }
    return 0;
}

int prime(int n)
{
    int i, count = 0;
    for (i = 1; i <= n; i++)
	{
        if (n % i == 0)
		{
            count++;
        }
    }
    if (count == 2)
        return 1;
    else
        return 0;
}
