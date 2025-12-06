#include <stdio.h>
int sum_of_digits(int x); 
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Sum of digits of %d = %d", n, sum_of_digits(n));
    return 0;
}

int sum_of_digits(int x)
{
    int sum = 0, rem = 0;
    while (x != 0)
    {
        rem = x % 10;
        sum = sum + rem;
        x = x / 10;
    }
    return sum;
}
