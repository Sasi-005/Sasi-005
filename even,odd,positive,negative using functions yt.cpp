#include<stdio.h>
void even_odd(int);//declaration1
void positive_negative(int);//declaration 2
void even_odd(int a)//function 1
{
	if(a%2==0)
	{
		printf("%d is even",a);
	}
	else
	{
		printf("%d is odd",a);
	}
}
void positive_negative(int a)// function 2
{
   if (a>0)
   {
   printf("\n%d is positive",a);
   }
   if(a<0)
   {printf("\n%d is negative",a);
   }
   if (a==0)
   {
   printf("\n%d neither positive nor negative",a);
   }
}
int main()
{
	int a;
	printf("number=");//line 1
	scanf("%d",&a);//line 2
	even_odd(a);
	positive_negative(a);
}
//here input is taken only once.to take input twice enter the line 1 and line 2 in function 1,2
/*here no need of declaration1,declaration 2 because here function definition is first and calling
is later,if function calling is first and definition is later then declaration 1,declaration 2 is
mandatory*/
/*void var()- function with no argument and no return value
 int var()-function with no arguments but returns a value 
void var(int)-function with arguments but no return value
int var(int)-function with argument and return value*/


