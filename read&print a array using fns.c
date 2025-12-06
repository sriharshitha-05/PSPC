#include <stdio.h>
void marks(int a[], int n);
int main() 
{
    int n, a[50], i;
    printf("Enter number of subjects: ");
    scanf("%d", &n);
    printf("Enter the marks of %d subjects:\n", n);
    for (i = 0; i < n; i++) 
	{
        scanf("%d", &a[i]);
    }
    printf("The marks of %d subjects you entered are:\n", n);
    marks(a, n);
    return 0;
}

void marks(int a[], int n) 
{
    int i;
    for (i = 0; i < n; i++)
    {
       printf("%d\n",a[i]);
	}
}
