#include<stdio.h>
int even_odd(int);
int main()
{
	int a,d;
	printf("number=");
	scanf("%d",&a);
	d=even_odd(a);
	if(d==2)
	{
	printf("%d is even",a);
	}
	else
	{
	printf("%d is odd",a);
	}
}
int even_odd(int a)
{
	if(a%2==0)
	return 2;
	
	else
	return 3;
}

