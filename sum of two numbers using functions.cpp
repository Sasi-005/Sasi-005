#include<stdio.h>
void sum()//any variable can be used in place of sum
{
	int a,b,c;
	scanf("%d%d",&a,&b);
	c=a+b;
	printf("%d",c);
}
int main()
{
	sum();//variable used beside void should be used here
	return 0;
}
