#include<stdio.h>
int main()
{
	char str[100];
	int c=0,w=0,l=0,i;
	printf("Enter a string:");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]=='\t'||str[i]==' '||str[i]=='\n')
		{
			w++;
		}
		if(str[i]=='\n')
		{
			l++;
		}
		c++;
	}
    printf("Number of characters=%d\n",c+1);
    printf("Number of words=%d\n",w+1);
    printf("Number of lines=%d\n",l+1);
	return 0;
}
