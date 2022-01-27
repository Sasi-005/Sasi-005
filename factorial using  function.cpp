#include <stdio.h>
int fact(int);
int fact(int a)
{
    int i,f=1;
    printf("enter a num");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
    	f=f*i;
	}
    return f;   
}
int main()
{
	int a,f,y;
    y=fact(a);
    printf("%d",y); 
}
