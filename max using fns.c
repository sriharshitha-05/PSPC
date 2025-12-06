#include <stdio.h>
int maximum(int a[], int n);
int main()
{
    int a[100], n, i;
    printf("Enter array size: ");
    scanf("%d", &n);
    printf("Enter the array elements:\n");
    for (i = 0; i < n; i++)
	{
        scanf("%d", &a[i]);
    }
    printf("Maximum value = %d\n", maximum(a, n));
    return 0;
}

int maximum(int a[], int n)
{
    int i, max;
    max = a[0];
    for (i = 1; i < n; i++)
	{
        if (a[i] > max)
		{
            max = a[i];
        }
    }
    return max;
}
