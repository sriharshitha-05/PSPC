#include <stdio.h>
int main()
{
    int A[20][20],B[20][20],C[20][20];
    int i,j,k,r1,c1,r2,c2;
    printf("Enter the size of 1st matrix (rows columns):\n");
    scanf("%d%d",&r1,&c1);
    printf("Enter the size of 2nd matrix (rows columns):\n");
    scanf("%d%d",&r2,&c2);

    printf("Enter the elements of 1st matrix:\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    
    printf("Enter the elements of 2nd matrix:\n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            scanf("%d",&B[i][j]);
        }
    }
    
    for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			C[i][j]=0;
		}
		for(k=0;k<c2;k++)
		{
			C[i][j]+=A[i][k]*B[k][j];
		}
		printf("\n");
	}
	
	printf("Multiplication matrix:\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("%3d",C[i][j]);
		}
	}
	return 0;
}
