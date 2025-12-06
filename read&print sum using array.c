#include <stdio.h>

int main()
{
    int sub[10], n, i, sum = 0;
    printf("Enter number of subjects: ");
    scanf("%d", &n);
    printf("Enter the marks of %d subjects:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &sub[i]);
    }
    for(i = 0; i < n; i++)
    {
        sum = sum + sub[i];
    }
    printf("Total marks = %d\n", sum);
    return 0;
}
