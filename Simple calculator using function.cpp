//WAP to print simple calculator using function .
#include<stdio.h>
#include<conio.h>      // with return type and with arguments.
int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);
int main()
{
	int a,b,x,y;
	printf("Enter first number:");
	scanf("%d",&a);
	printf("Enter second number :");
	scanf("%d",&b);
	add(x,y);
	sub(x,y);
	mul(x,y);
	div(x,y);
}

int add(int a, int b)
{
	int sum;
	sum=a+b;
	printf("%d",sum);
	return(0);
}
int suc(int a, int b)
{
	int sub;
	sub=a-b;
	printf("%d",sub);
	return(0);
}

int mul(int a, int b)
{
	int mul;
	mul=a*b;
	printf("%d",mul);
	return(0);
}

int div(int a, int b)
{
	int div;
	div=a/b;
	printf("%d",div);
	return(0);
}
