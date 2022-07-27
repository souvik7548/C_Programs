#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,a[3][3],b[3][3];
	printf("enter an element of an matrix");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			b[i][j]=a[i][j];
		}
	}
	printf("the matrix transpose is");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("%d",b[i][j]	);
		printf("\n");
		}
	}
	getch();
}
