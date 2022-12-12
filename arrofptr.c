#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *p[2];

	int cols,rows,i,j;

	printf("Enter the rows, coloums:");
	scanf("%d",&cols);


	for(i=0;i<2;i++)
	{
		p[i]=malloc(cols*sizeof(int));
	}

	for(i=0;i<2;i++)
	{
		for(j=0;j<cols;j++)
		{
			scanf("%5d",&p[i][j]);
		}
		printf("\n");
	}

	for(i=0;i<2;i++)
	{
		for(j=0;j<cols;j++)
		{
			printf("%5d",p[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}



