#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int a[5],b[5],c[10],i,j,x=0,m,n,p=0;
printf("Enter the size of set A(<=5)\n");
scanf("%d",&m);
printf("Enter the elements of set A\n");
    for(i=0;i<m;i++)
    {
scanf("%d",&a[i]);
        c[x++]=a[i];
    }
printf("Enter the size of set B(<=5)\n");
scanf("%d",&n);
printf("Enter the elements of set B\n");
    for(j=0;j<n;j++)
    {
scanf("%d",&b[j]);
    }
    for(j=0;j<n;j++)
    {
	p=0;
        for(i=0;i<m;i++)
        {
            if(b[j]==a[i])
                p++;
	c[x++]=b[j];
		}
    }
printf("printing the union set\n");
    for(i=0;i<x;i++)
printf("%d,",c[i]);
getch();
}




