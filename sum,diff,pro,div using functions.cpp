#include<stdio.h>
void addition()
{
	int a,b,sum;
    scanf("%d%d",&a,&b);
	sum=a+b;
	printf("\nsum=%d\n",sum);
}
void difference()
{
	int a,b,diff;
    scanf("%d%d",&a,&b);
	diff=a-b;
	printf("difference=%d\n",diff);
}
void product()
{
	int a,b,pro;
scanf("%d%d",&a,&b);
	pro=a*b;
	printf(" product =%d\n",pro);
}
void division()
{
	float a,b,div;
    scanf("%f%f",&a,&b);
	div=a/b;
	printf("division=%.2f\n",div);
}
int main()
{
	addition();
	difference();
	product();
	division();
	return 0;
}
