#include<stdio.h>
int sum(int,int);
int main()
{
	int a,b,d;
	scanf("%d%d",&a,&b);
	d=sum(a,b);
	printf("%d",d);
	return 0;
	
}
int sum(int a,int b)
{
	int c;
	c=a+b;
	return c;
}

