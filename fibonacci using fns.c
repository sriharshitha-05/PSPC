#include <stdio.h>
void fibonacci(int n);
int main() 
{
    int n;
    printf("Enter how many no. to be printed: ");
    scanf("%d", &n);
    fibonacci(n);
    return 0;
}

void fibonacci(int n)
{
    int f = 0, s = 1, t, i;
    printf("Enter 1st number: ");
    scanf("%d", &f);
    printf("Enter 2nd number: ");
    scanf("%d", &s);
    printf("Fibonacci series:");
    printf("%d %d ", f, s);
    for (i = 1; i <= n - 2; i++)
	{
        t = f + s;
        printf("%d ", t);
        f = s;
        s = t;
    }
}
