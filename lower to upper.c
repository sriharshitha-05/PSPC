#include <stdio.h>
int main()
{
	char st[30];
	int i;
	printf("Enter a string:");
	gets(st);
	for(i=0;st[i]!='\0';i++)
	{ 

		{
			st[i]=st[i]-32;
		}
	}
	puts(st);
	return 0;
}

