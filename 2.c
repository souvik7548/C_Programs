#include<stdio.h>
#include<conio.h>
 void main()
 {
 	
 	int i,j,k=1;
 	printf("enter numbers");
 	for(i=1;i<=5;i++)
 	{
 		for(j=1;j<=i;j++)
 		{
 			printf("%d",k);
 			k++;
		 }
		 printf("\n");
	 }
	 getch();
 }
