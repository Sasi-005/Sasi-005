#include<stdio.h>
//call by reference
int swap(int *,int *);
int main()
{
	int a=10,b=20;
	printf("before swapping: %d %d",a,b);
	swap(&a,&b);
	printf("\nafter swapping: %d %d",a,b);
	return 0;
}
int swap(int *x, int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
	printf("\nafter swapping in the function: %d %d",*x,*y);
}
