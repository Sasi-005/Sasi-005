#include<stdio.h>
int prime_notprime(int);
int main()
{
	int a,d;
	scanf("%d",&a);
	d=prime_notprime(a);
	if(d==2)
	{
	printf("prime");
	}
	else
	{
	printf("not prime");
	}
}
int prime_notprime(int a)

{ int i=1,p=0;
while(i<=a)
	{
		if(a%i==0)
		p=p+1;
		i++;
	}
	if(p==2)
	return 2;
	
	else
	return 3;
}
