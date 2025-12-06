#include <stdio.h>
int main()
{
	char st1[30],st2[30];
	int i=0,flag=0;
	printf("Enter a string:");
	gets(st1);
	printf("Enter a string:");
	gets(st2);
    while(st1[i]!='\0'||st2[i]!='\0')
    {
    	if(st1[i]!=st2[i])
    	{
    		flag=1;
    		break;
    		
		}
		i++;
	}
	if(flag==0)
	{
		puts("both strings are equal");
	}
	else
	{
		puts("both strings are not equal");
	}
	return 0;
}
