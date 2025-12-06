#include <stdio.h>
void readmatrix(int n, int a[5][5]);
void printmatrix(int n, int a[5][5]);
void summatrix(int n, int a[5][5], int b[5][5], int c[5][5]);
int main()
{
    int a[5][5], b[5][5], c[5][5];
    int n;
    printf("Enter the order of 1st matrix: ");
    scanf("%d", &n);
    printf("Enter the elements of 1st matrix:\n");
    readmatrix(n, a);
    printf("Enter the order of 2nd matrix: ");
    scanf("%d", &n);
    printf("Enter the elements of 2nd matrix:\n");
    readmatrix(n, b);
    summatrix(n, a, b, c);
    printf("Addition matrix is:\n");
    printmatrix(n, c);
    return 0;
}

void readmatrix(int n, int a[5][5])
{
    int i, j;
    for (i = 0; i < n; i++)
	{
        for (j = 0; j < n; j++)
		{
            scanf("%d", &a[i][j]);
        }
    }
}

void printmatrix(int n, int a[5][5])
{
    int i, j;
    for (i = 0; i < n; i++)
	{
        for (j = 0; j < n; j++)
		{
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

void summatrix(int n, int a[5][5], int b[5][5], int c[5][5])
{
    int i, j;
    for (i = 0; i < n; i++)
	{
        for (j = 0; j < n; j++)
		{
            c[i][j] = a[i][j] + b[i][j];
        }
    }
}
