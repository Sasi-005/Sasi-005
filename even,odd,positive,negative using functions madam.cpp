#include<stdio.h>
void even (void);
void positive (void);
void even()
{
	int a;
	printf("number=");
	scanf("%d",&a);
	if(a%2==0)
	{
		printf("%d is even",a);
	}
	else
	{
		printf("%d is odd",a);
	}	
}
void positive()
{
	int a;
	printf("\nnumber=");
	scanf("%d",&a);
	if(a>0)
	{
		printf("%d is positive",a);
	}
	else
	{
		printf("%d is negative",a);
	}
}
int main()
{
	even();
	positive();
}

