#include <stdio.h>
#include <string.h>
int main() {
    char str1[30], str2[30];
    printf("Enter a string to reverse: ");
    gets(str1);
    strcpy(str2, strrev(str1));
    printf("The reverse of string is: ");
    puts(str2);
    return 0;
}
