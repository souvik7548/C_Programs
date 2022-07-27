#include<stdio.h>
 int main()
 {
 	int a,b;
 	printf("value before swapping is=%d",a,b);
 	printf("after swapping is=%d",b,a);
 	scanf("%d%d",&a,&b);
 	a=b;
 	b=a;
 	printf("after swapping is=%d",a,b);
 	printf("before swapping is=%d",a,b);
 	return 0;
 }
