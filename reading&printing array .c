#include <stdio.h>

int main()
{
    int sub[6], i;

    printf("Enter the marks of 6 subjects:\n");
    for(i = 0; i < 6; i++)
        scanf("%d", &sub[i]);

    printf("The 6 subjects marks you entered are:\n");
    for(i = 0; i < 6; i++)
        printf("%d\n", sub[i]);

    return 0;
}
