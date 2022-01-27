#include<stdio.h>
int square(int a);
int main()
{
	int a,b;
	scanf("%d",&a);
	b=square(a);
	printf("%d",b);
	return 0;
}
int square(int a)
{
	int c;
	c=a*a;
	return c;
}
//example for with arguments, with return types
