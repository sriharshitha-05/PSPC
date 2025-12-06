#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int length,i;
    printf("Enter the string: ");
    gets(str);
    length = strlen(str);
    printf("The length of string is: %d\n", length);
    for (i = length - 1; i >= 0; i--) 
	{
        printf("%c", str[i]);
    }
    return 0;
}
