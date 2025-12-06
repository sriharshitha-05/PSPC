#include <stdio.h>
int main()
{
    char st[30];
    int i, count = 0;
    printf("Enter your string to reverse:");
    gets(st);
    for (i = 0; st[i] != '\0'; i++)
        count++;
    printf("The length of string is: %d"\n, count);
    printf("The reverse of your string is:");
    for (i = count - 1; i >= 0; i--)
        printf("%c", st[i]);
    return 0;
}
