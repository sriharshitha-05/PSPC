#include<stdio.h>
int main()
{
	char str[100],substr[50];
	int i,j,found;
	printf("Enter a string:");
	gets(str);
	printf("Enter a substring to find position of it:");
	gets(substr);
	for(i=0;str[i]!='\0';i++)
	{
		found=1;
		for(j=0;substr[j]!='\0';j++)
		{
			if(str[i+j]!=substr[j])
			{
                found=0;
				break;
			}
		}
    	if(found==1)
    	{
    		printf("Substring found at position %d\n",i);
    		return 0;
		}
	}
	printf("Substring not found\n");
	return 0;
}
