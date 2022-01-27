#include<stdio.h>
void square(int a);
int main()
{
	int a;
	scanf("%d",&a);
	square(a);
	return 0;
}
void square(int a)
{
	int c;
	c=a*a;
	printf("%d",c);
}
//example for with arguments but without return types
