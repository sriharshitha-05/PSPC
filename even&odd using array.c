#include <stdio.h>

int main()
{
    int a[100], i, n;

    printf("Enter the limit: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("\nEven numbers:\n");
    for(i = 0; i < n; i++)
        if(a[i] % 2 == 0)
            printf("%d ", a[i]);

    printf("\nOdd numbers:\n");
    for(i = 0; i < n; i++)
        if(a[i] % 2 != 0)
            printf("%d ", a[i]);

    return 0;
}
